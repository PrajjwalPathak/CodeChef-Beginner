#include<iostream>

using namespace std;

int main() {
    int i, j, t, n, x, s, r, rf;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d", &n, &x);
        rf = 0;
        for(j=0; j<n; j++) {
            scanf("%d %d", &s, &r);
            if(s <= x && rf < r) {
                rf = r;
            }
        }
        printf("%d\n", rf);
    }
    
    return 0;
}