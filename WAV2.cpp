#include<iostream>

using namespace std;

int main() {
  
    int n, q, i, j;
    scanf("%d %d", &n, &q);
    int a[n];
    int res[q];
    int arr[q];
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<q; i++) {
        scanf("%d", &res[i]);
        arr[i] = 1;
        for(j=0; j<n; j++) {
            arr[i] = arr[i]*(res[i] - a[j]);
        }
    }
    for(i=0; i<q; i++) {
        if(arr[i]>0) {
            printf("POSITIVE\n");
        }
        else if(arr[i]<0) {
            printf("NEGATIVE\n");
        }
        else {
            printf("0\n");
        }
    }
    return 0;
    
}