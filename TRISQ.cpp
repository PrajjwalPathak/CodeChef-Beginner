#include<iostream>

using namespace std;

int main() {
    int t, i, j, k, sum;
    cin>>t;
    int arr[t];
    for(i=0; i<t; i++) {
        cin>>arr[i];
        sum = 0;
        k = (arr[i]/2)-1;
        for(j=k; j>0; j--) {
            sum = sum + j;
        }
        arr[i] = sum;
        
    }
    for(i=0; i<t; i++) {
        cout<<arr[i]<<"\n";
    }

    return 0;
}