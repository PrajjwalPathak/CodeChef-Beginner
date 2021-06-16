#include<iostream>

using namespace std;

int main() {
    int t, xa, xb, Xa, Xb, i;
    scanf("%d", &t);
    char arr[t];
    for(i=0; i<t; i++) {
        scanf("%d %d %d %d", &xa, &xb, &Xa, &Xb);
        arr[i] = (Xa/xa) + (Xb/xb);
    }
    for(i=0; i<t; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}