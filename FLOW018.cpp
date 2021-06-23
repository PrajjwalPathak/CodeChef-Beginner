#include<iostream>

using namespace std;

int main() {
  
    int t, i, j, n, num, f;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        if(n == 0) {
            printf("1");
        }
        else {
            num = n;
            f = 1;
            for(j=0; j<n; j++) {
                f = f*num;
                num--;
            }
        }
        printf("%d\n", f);
    }
    
    return 0;
}