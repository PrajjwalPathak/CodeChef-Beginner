#include<iostream>

using namespace std;

int main() {
  
    int t, i, a, b, c;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>a>>b>>c;
        if(a<b && a<c) {
            if(b<c) {
                cout<<b<<"\n";
            }
            else {
                cout<<c<<"\n";
            }
        }
        else if(b<a && b<c) {
            if(a<c) {
                cout<<a<<"\n";
            }
            else {
                cout<<c<<"\n";
            }
        }
        else {
            if(a<b) {
                cout<<a<<"\n";
            }
            else {
                cout<<b<<"\n";
            }
        }
    }
    
    return 0;
}