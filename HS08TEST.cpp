//Program to calculate balance in the account
#include<iostream>
using namespace std;
int main() {
    //Variables declared
    int x=0;
    float b=0;
    //User Input
    scanf("%d %f",&x,&b);
    //Condition if withdrawing amount is less than or equal to balance
    if(x%5==0 && x<=(b-0.50)) {
        //balance updated
        b=b-x-0.5;
        //Output
        printf("%0.2f",b);
    }
    else {
        //Output
        printf("%0.2f",b);
    }

    return 0;
    
}