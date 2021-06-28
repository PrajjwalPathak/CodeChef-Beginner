#include <iostream>

using namespace std;

int check(int n, int m, int k, char a[][m]) {
    int j, l;
    for(j=0; j<n; j++) {
        for(l=0; l<m; l++) {
            while(k--) {
                if(a[j][l] == a[j][j+1] && a[j+1][l] == a[j+1][l+1]) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {

    int t, n, m, k, i, x, y, c;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d %d", &n, &m, &k);
        char a[n][m];
        c = 0;
        while(c < n*m) {
            scanf("%d %d", &x, &y);
            if(c%2 == 0) {
                a[x][y] = 'A';
            }
            else {
                a[x][y] = 'B';
            }
            c++;
            if(check(n, m, k, a) == 1) {
                break;
            }
        }
        if(c%2 == 0) {
            printf("Alice\n");
        }
        else {
            printf("Bob\n");
        }
        
    }
    
    return 0;
}
