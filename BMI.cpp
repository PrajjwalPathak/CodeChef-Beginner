#include<iostream>

using namespace std;

int main() {
    int t, h, m, i;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i<t; i++) {
        scanf("%d %d", &m, &h);
        arr[i] = m/(h*h);
    }  
    for(i=0; i<t; i++) {
        if(arr[i] <= 18) {
            printf("1\n");
        }
        else if(arr[i] >= 19 && arr[i] <=24) {
            printf("2\n");
        }
        else if(arr[i] >= 25 && arr[i] <=29) {
            printf("3\n");
        }
        else {
            printf("4\n");
        }
    }

    return 0;
}