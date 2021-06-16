#include<iostream>

using namespace std;

int main() {
    int t, x, d, m, i;
    cin>>t;
    int arr[t];
    for(i=0 ;i<t; i++) {
        cin>>x>>m>>d;
        if((x*m) > (x+d)) {
            arr[i] = x+d;
        }
        else {
            arr[i] = x*m;
        }
    }
    for(i=0 ;i<t; i++) {
        cout<<arr[i]<<"\n";
    }
    return 0;
}