#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int t, i, n;
    cin>>t;
    int arr[t];
    for(i=0; i<t; i++) {
        cin>>n;
        arr[i] = sqrt(n);
    }
    for(i=0; i<t; i++) {
        cout<<arr[i]<<"\n";
    }


    return 0;
}