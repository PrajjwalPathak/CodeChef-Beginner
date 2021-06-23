#include<iostream>

using namespace std;

int main() {
  
    int t, i, n, rev, num;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        num = n;
        rev = 0;
        while(n != 0) {
            rev = rev + n%10;
            rev = rev*10;
            n = n/10;
        }
        rev = rev/10;
        if(rev == num) {
            printf("wins\n");
        }
        else {
            printf("loses\n");
        }

    }
    
    return 0;
}