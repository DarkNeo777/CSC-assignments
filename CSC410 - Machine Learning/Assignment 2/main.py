#~/usr/bin/env python
"""
The main script for running experiments
"""
from random import gauss
from data import get_dataset

import matplotlib.pyplot as plt
import numpy as np

from sklearn.model_selection import train_test_split
from sklearn import metrics
from sklearn.model_selection import cross_val_score
from sklearn.naive_bayes import GaussianNB

from sklearn.tree import DecisionTreeClassifier
from sklearn.ensemble import AdaBoostClassifier

def splitdataset(X , Y):
  
    # Splitting the dataset into train and test 70/30
    X_train, X_test, y_train, y_test = train_test_split( 
    X, Y, test_size = 0.3, random_state = 100)
      
    return X, Y, X_train, X_test, y_train, y_test

def main():
    dataset_directory = 'data'
    dataset = 'spam' #volcanoes #voting
    schema, X, y = get_dataset(dataset, dataset_directory)
    
    
    print("Data Information on the spam dataset")
    print("Dataset length: ", len(X))
    print("Dataset Shape: ", X.shape)

    #calls the split function to divide the data into training and test
    X, Y, X_train, X_test, y_train, y_test = splitdataset(X, y)

    #object that uses adaboost classifier with decision tree implementation
    abc_dt = AdaBoostClassifier(DecisionTreeClassifier())
    #fits the data to the object model 
    abc_dt.fit(X_train, y_train)
    #make predicton on the test data, and stores it into the y prediction object
    y_pred_abc = abc_dt.predict(X_test)

    #object with Gaussian Naive Bayes Classifier
    gnbc = GaussianNB()
    #stores the 5 cross validation score with gaussian naive bayes classifier
    scores = cross_val_score(gnbc, X, y, cv=5)

    scores
    print("Gaussian Naive Bayes Classifier: %0.2f accuracy with a standard deviation of %0.2f" % (scores.mean(), scores.std()))

    print("AdaBoost Classifier using Decision Tree Accuracy: ", metrics.accuracy_score(y_test, y_pred_abc))


    
if __name__ == "__main__":
    main()
