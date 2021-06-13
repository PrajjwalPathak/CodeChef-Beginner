
#include<iostream>
using namespace std;
int main() {
  
    int T=0,A=0,B=0,i=0;
    scanf("%d",&T);
    int a[T];

    for(i=0;i<T;i++) {
        scanf("%d %d",&A,&B);

        a[i]=A%B;
    }

    for(i=0;i<T;i++) {
        printf("%d\n",a[i]);
    }

    return 0;
    
}