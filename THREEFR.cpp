#include<iostream>

using namespace std;

int main() {
  
    int t, i, x, y, z;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>x>>y>>z;
        if((x+y+z) == 2*max(max(x,y),z)) {
            cout<<"yes\n";
        }
        else {
            cout<<"no\n";
        }
    }
    
    return 0;
}