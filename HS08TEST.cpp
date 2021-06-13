
#include<iostream>
using namespace std;
int main() {
   
    int x=0;
    float b=0;
   
    scanf("%d %f",&x,&b);

    if(x%5==0 && x<=(b-0.50)) {
        
        b=b-x-0.5;
     
        printf("%0.2f",b);
    }
    else {
      
        printf("%0.2f",b);
    }

    return 0;
    
}