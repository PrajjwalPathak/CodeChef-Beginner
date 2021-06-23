#include<iostream>

using namespace std;

int main() {
  
    int t, n, i, j, a, flag;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        int a[n];
        
        for(j=0; j<n; j++) {
            scanf("%d", &a[j]);
        }
        for(j=n-1; j>=0; j--) {
            if(a[j]<=7) {
                flag = j;
                break;
            }
        }
        arr[i] = flag+1;
    }
    for(i=0; i<t; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
    
}