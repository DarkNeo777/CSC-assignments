#include <iostream>

void fibb(int x){
    int n1=0,n2=1,n3;
    for (int i = 2; i < x; ++i)
    {
        n3 = n1 + n2;
        std::cout<< n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    
    
}
int main() {
    int x;
    std::cout<< "Enter a number: ";
    std::cin >> x;
    fibb(x);
    return 0;
}

