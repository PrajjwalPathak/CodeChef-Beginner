#include<iostream>

using namespace std;

int main() {
  
    int t, i, D, d, a, b, c;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>D>>d>>a>>b>>c;
        if(D*d >= 10 && D*d < 21) {
            cout<<a<<"\n";
        }
        else if(D*d >= 21 && D*d < 42) {
            cout<<b<<"\n";
        }
        else if(D*d >= 42) {
            cout<<c<<"\n";
        }
        else {
            cout<<0<<"\n";
        }
    }
    
    return 0;
}