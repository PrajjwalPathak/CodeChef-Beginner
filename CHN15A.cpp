#include<iostream>

using namespace std;

int main() {

    int t, i, j, n, k, m, c;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n>>k;
        c = 0;
        for(j=0; j<n; j++) {
            cin>>m;
            if((m+k)%7 == 0) {
                c++;
            }
        }
        cout<<c<<"\n";
    }

    return 0;
}