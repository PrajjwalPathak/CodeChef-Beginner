#include<iostream>

using namespace std;

int main() {
  
    int t, i, j, n, flag;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        if(n == 0 || n == 1) {
            printf("no\n");
        }
        else if(n == 2) {
            printf("yes\n");
        }
        else {
            flag = 1;
            for(j=2; j<n/2; j++) {
                if(n%j == 0) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1) {
                printf("yes\n");
            }
            else {
                printf("no\n");
            }
        }
    }
    
    return 0;
}