//Program to take multiple inputs from the user and then find how many of them are divisible by a number
#include<iostream>
using namespace std;
int main() {
    /*Initialising Variables
    n = Test Cases
    k = Divisor
    count = Number of divisible numbers
    */
    int n=0,k=0,i=0,count=0;
    //User Input
    scanf("%d %d",&n,&k);
    //Array
    int a[n];
    //Forloop for taking input and storing the sum of inputs in the array a[n]
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        //Condition for Divisibility
        if(a[i]%k==0) {
            count+=1;
        }
    }
    //Printing Result
    printf("%d",count);
    return 0;
    
}