#include<iostream>

using namespace std;

int main() {
    int t, i, g, c;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>g>>c;
        
        cout<<(c*c)/(2*g)<<"\n";
        
    }

    return 0;
}