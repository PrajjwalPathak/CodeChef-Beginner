#include<iostream>

using namespace std;

int main() {
    int t, n, i;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        arr[i] = n;
    }  
    for(i=0; i<t; i++) {
        if(arr[i] == 2010 || arr[i] == 2015 || arr[i] == 2016 || arr[i] == 2017 || arr[i] == 2019) {
            printf("HOSTED\n");
        }
        else {
            printf("NOT HOSTED\n");
        }
    }

    return 0;
}