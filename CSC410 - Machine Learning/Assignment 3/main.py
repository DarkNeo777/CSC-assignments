#~/usr/bin/env python
"""
The main script for running experiments
"""
from statistics import mode
from data import get_dataset

import numpy as np
from sklearn.metrics import confusion_matrix
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import accuracy_score
from sklearn.metrics import classification_report
from sklearn.linear_model import LogisticRegression
from sklearn.neural_network import MLPClassifier
from sklearn import tree

#splits the data from training and testing
def splitdataset(X , Y):
    X_train, X_test, y_train, y_test = train_test_split( 
    X, Y, test_size = 0.3, random_state = 100)
      
    return X, Y, X_train, X_test, y_train, y_test

def main():
    dataset_directory = 'data'
    dataset = 'voting' #volcanoes #voting
    schema, X, y = get_dataset(dataset, dataset_directory)
    
    #Displays the Data before hand
    print("Data Information")
    print("Dataset length: ", len(X))
    print("Dataset Shape: ", X.shape)

    #call the spit function to split data
    X, Y, X_train, X_test, y_train, y_test = splitdataset(X, y)

    #calls the neural network function from sklearn, turn it into a variable
    #sets the hidden layers to 1 with the number of neurons to 1000 || 100 || 1
    #the constant learning rate to 0.1, default is 0.001
    #fits the neural network model to the dataset of voting
    clf = MLPClassifier(max_iter=500, hidden_layer_sizes=(1000,), learning_rate_init=0.1,random_state=1)
    clf.fit(X_train, y_train)

    #find the accuracy of the model based on the dataset
    #prints the results
    accuracy = clf.score(X,y)
    print("The acccuracy of the model is: ", accuracy)
  
    
if __name__ == "__main__":
    main()
