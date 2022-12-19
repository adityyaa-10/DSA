//Factorial of a number using recursion;

#include <iostream>
using namespace std;

int fact(int n){
    if(n==0)
    return 1;   //Providing with a base case since 0! = 1;
    
    else
    return n*fact(n-1);  //Calling the function within itself {Recursive approach}
}

int main(){
    int n,factorial;
    cout<<"Enter any number: ";
    cin>>n;
    factorial = fact(n);
    cout<<"Factorial of "<<n<<" is "<<factorial<<endl;
    
}