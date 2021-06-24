#include<iostream>

using namespace std;

int sum(int a) {
    int i, res = 0;
    for(i=1; i<=a; i++) {
        res = res + i;
    }
    return res;
}

int main() {
  
    int t, i, j, d, n, f;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d", &d, &n);
        f = sum(n);
        for(j=1; j<d; j++) {
            f = sum(f);
        }
        printf("%d\n", f);
    }
    
    return 0;
}