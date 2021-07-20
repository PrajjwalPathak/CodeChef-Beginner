#include<iostream>

using namespace std;

int main() {

    int t, i, w1, w2, x1, x2, m;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>w1>>w2>>x1>>x2>>m;
        if((w2-w1)>=(x1*m) && (w2-w1)<=(x2*m)) {
            cout<<1<<"\n";
        }
        else {
            cout<<0<<"\n";
        }
    }

    return 0;
}