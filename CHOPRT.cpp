#include<iostream>

using namespace std;

int main() {
    int t, a, b, i;
    scanf("%d", &t);
    char arr[t];
    for(i=0; i<t; i++) {
        scanf("%d %d", &a, &b);
        if(a > b) {
            arr[i] = '>';
        }
        else if(a < b) {
            arr[i] = '<';
        }
        else {
            arr[i] = '=';
        }
    }
    for(i=0; i<t; i++) {
        printf("%c\n", arr[i]);
    }

    return 0;
}