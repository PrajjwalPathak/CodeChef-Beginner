#include<iostream>
using namespace std;
int main() {
    //Initialising Variables
    int n=0,k=0,i=0,count=0;
    //User Input
    scanf("%d %d",&n,&k);
    //Array
    int a[n];
    //Forloop for taking input and storing the sum of inputs in the array a[n]
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]%k==0) {
            count+=1;
        }
    }
    //Printing Result
    printf("%d",count);
    return 0;
    
}