#include<iostream>

using namespace std;

int main() {
    int t, n, i;
    cin>>t;
    int arr[t];
    for(i=0; i<t; i++) {
        cin>>arr[i];
        if(arr[i] == 1) {
            arr[i] = 1;
        }
        else {
            arr[i] = (arr[i]/2)+1;
        }
    }
    for(i=0; i<t; i++) {
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}