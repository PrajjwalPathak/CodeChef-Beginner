#include<iostream>

using namespace std;

int main() {
    
    long int t, i, j, n, min;
    scanf("%ld", &t);
    for(i=0; i<t; i++) {
        scanf("%ld", &n);
        long int a[n];
        long int b[n-1];
        for(j=0; j<n; j++) {
            scanf("%ld", &a[j]);
        }
        min = a[0] + a[1];
        for(j=0; j<n-1; j++) {
            b[j] = a[j] + a[j+1];
            if(min > b[j]) {
                min = b[j];
            }
        }
        printf("%ld\n", min);
    }
    
    return 0;
}