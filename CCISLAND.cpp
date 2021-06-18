#include<iostream>

using namespace std;

int main() {
    int t, i, x, y, d;
    float xr, yr;
    scanf("%d", &t);
    float arr[t];
    for(i=0; i<t; i++) {
        scanf("%d %d %f %f %d", &x, &y, &xr, &yr, &d);
        arr[i] = min(float(x/xr),float(y/yr));
    }
    for(i=0; i<t; i++) {
        if(arr[i] >= d) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}