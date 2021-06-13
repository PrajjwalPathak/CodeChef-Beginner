#include<iostream>

using namespace std;

int main() {
    int t, x, a, b, i;
    cin>>t;
    int arr[t];
    for(i=0; i<t; i++) {
        cin>>x>>a>>b;
        arr[i] = (a + (100-x) * b) * 10;
    }
    for(i=0; i<t; i++) {
        cout<<arr[i]<<"\n";
    }
    return 0;
}