#include<iostream>

using namespace std;

int main() {
  
    int t, i, k, n, s, j, c;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        c = 0;
        for(k=0; k<n; k++) {
            cin>>s>>j;
            if(j-s > 5) {
                c++;
            }
        }
        cout<<c<<"\n";
    }
    
    return 0;
}