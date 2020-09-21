//Program to calculate sum of digits of multiple inputs
#include <iostream>
using namespace std;

//Function for taking inputs
void input(int a[], int t) {
    int i;
    for(i=0;i<t;i++) {
        scanf("%d",&a[i]);
    }
}

//Function for calculating sum of digits of a number
void sumOfDigits(int a[], int t) {
    int i,sum;
    for(i=0;i<t;i++) {
        sum=0;
        while(a[i]!=0) {
            sum=sum+a[i]%10;
            a[i]=a[i]/10;
        }
        a[i]=sum;
    }
}

//Function to display results
void display(int a[], int t) {
    int i;
    for(i=0;i<t;i++) {
        printf("%d\n",a[i]);
    }
}

int main() {
    /*Variables Declared
    T = Test cases
    A[] = Array A
    */
    int T;
    scanf("%d",&T);
    int A[T];
    input(A,T);
    sumOfDigits(A,T);
    display(A,T);
    return 0;
}
