#include<iostream>

using namespace std;

int main() {
    int t, i, n, k, j, count, loss;
    cin>>t;
    int arr[t];
    for(i=0; i<t; i++) {
        cin>>n>>k;
        int p[n];
        count = 0;
        loss = 0;
        for(j=0; j<n; j++) {
            cin>>p[j];
            if(p[j]>k) {
                loss = loss + (p[j]-k);
            }
        }
        arr[i] = loss;
    }
    for(i=0; i<t; i++) {
        cout<<arr[i]<<"\n";
    }

    return 0;
}