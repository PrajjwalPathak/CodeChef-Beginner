#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main() {

    int t, i;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i<t; i++) {
        scanf("%d", &arr[i]);
        arr[i] = fact(arr[i]);
    }
    for(i=0; i<t; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
