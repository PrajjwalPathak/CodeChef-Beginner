//Program to calculate sum of numbers of multiple test cases
#include<iostream>
using namespace std;
int main() {
    /*Variables declared
    T = Test Cases
    A = First Number
    B = Second Number
    a[T] = Array
    */
    int T=0,A=0,B=0,i=0;
    scanf("%d",&T);
    int a[T];
    //Forloop for taking multiple user input
    for(i=0;i<T;i++) {
        scanf("%d %d",&A,&B);
        //Addition
        a[i]=A+B;
    }
    //Forloop to print the results
    for(i=0;i<T;i++) {
        printf("%d\n",a[i]);
    }

    return 0;
    
}