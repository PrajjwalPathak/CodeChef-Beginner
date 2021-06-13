#include<iostream>

using namespace std;

int main() {
    int n, m, s, i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++) {
        cin>>m>>s;
        arr[i] = m/s;
    }
    for(i=0; i<n; i++) {
        cout<<arr[i]<<"\n";
    }
    return 0;
}