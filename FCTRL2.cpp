#include <iostream>
using namespace std;

int fact(int n) {
    if(n >= 1){
        return n * fact(n - 1);
    }
    else{
        return 1;
    }
}

int main() {

    int T,i;
    scanf("%d",&T);
    int A[T];
    for(i=0;i<T;i++) {
        scanf("%d",&A[i]);
        A[i]=fact(A[i]);
    }
    for(i=0;i<T;i++) {
        printf("%d\n",A[i]);
    }
    return 0;
}
