#include <iostream>

using namespace std;

int main() {

    int t, n, k, i, j;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d", &n, &k);
        int a[n];
        for(j=0; j<n; j++) {
            scanf("%d", &a[j]);
            if(a[j] <= k) {
                k = k - a[j];
                a[j] = 1;
            }
            else {
                a[j] = 0;
            }
        }
        for(j=0; j<n; j++) {
            printf("%d", a[j]);
        }
        printf("\n");
    }
    
    return 0;
}
