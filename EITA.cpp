#include<iostream>

using namespace std;

int main() {
    int t, i, d, x, y, z;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>d>>x>>y>>z;
        x = x*7;
        y = y*d;
        z = z*(7-d);
        y = y + z;
        cout<<max(x,y)<<"\n";
        
    }

    return 0;
}