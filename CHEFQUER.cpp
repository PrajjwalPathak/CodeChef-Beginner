#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, q, i, j, query, l, r, x, y;
    vector<int> s;
    scanf("%d %d", &n, &q);
    int a[n];
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(j=0; j<q; j++) {
        scanf("%d", &query);
        if(query == 1) {
            scanf("%d %d %d", &l, &r, &x);
            for(i=0; i<n; i++) {
                if((i+1)>= l && (i+1)<=r) {
                    a[i] = a[i] + (x + (i+1) - l)*(x + (i+1) - l);
                }
            }
        }
        else if(query == 2) {
            scanf("%d", &y);
            printf("%d\n", a[y-1]);
        }
    }
    
    return 0;
}
