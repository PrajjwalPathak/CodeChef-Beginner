#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int t, n, i, count;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        count = 0;
        while(sqrt(n) >= 1) {
            n = n - (int(sqrt(n))*int(sqrt(n)));
            count++;
        }
        arr[i] = count;
    }
    for(i=0; i<t; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}