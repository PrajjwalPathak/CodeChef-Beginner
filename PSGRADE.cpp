#include<iostream>

using namespace std;

int main() {
    int t, i, am, bm, cm, tm, a, b, c;
    scanf("%d", &t);
    int in[7];
    int arr[t];
    for(i=0; i<t; i++) {
        scanf("%d %d %d %d %d %d %d", &in[0], &in[1], &in[2], &in[3], &in[4], &in[5], &in[6]);
        if(in[4]>=in[0] && in[5]>=in[1] && in[6]>=in[2] && (in[4]+in[5]+in[6])>=in[3]) {
            arr[i] = 1;
        }
        else {
            arr[i] = 0;
        }
    }
    for(i=0; i<t; i++) {
        if(arr[i] == 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}