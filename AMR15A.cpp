#include<iostream>

using namespace std;

int main() {
  
    int n, i, o = 0, e = 0;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i]%2 == 0) {
            e++;
        }
        else {
            o++;
        }
    }
    if(e > o) {
            printf("READY FOR BATTLE\n");
    }
    else {
            printf("NOT READY\n");
    }
    
    return 0;
}