#include<iostream>

using namespace std;

int main() {
  
    int t, i, n;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        if(n%2 == 0) {
            printf("%d\n", n);
        }
        else {
            n = (n/2) + 1;
            printf("%d\n", n);
        }
    }
    
    return 0;
}