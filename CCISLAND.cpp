#include<iostream>

using namespace std;

int main() {
    int t, i, x, y, d;
    float xr, yr;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d %f %f %d", &x, &y, &xr, &yr, &d);
        if(min(x/xr,y/yr) >= d) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}