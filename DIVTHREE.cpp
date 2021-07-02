#include<iostream>

using namespace std;

int main() {
    int t, i, j, n, k, d, a, sum;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n>>k>>d;
        sum = 0;
        for(j=0; j<n; j++) {
            cin>>a;
            sum = sum + a;
        }
        if(sum/k == 0) {
            cout<<0<<"\n";
        }
        else {
            if(sum/k > d) {
                cout<<d<<"\n";
            }
            else {
                cout<<sum/k<<"\n";
            }
        }
    }

    return 0;
}