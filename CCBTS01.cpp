#include<iostream>

using namespace std;

int main() {
  
    int t, i, j;
    string s;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>s;
        if(s[0] != s[1] && s[1] != s[2] && s[0] != s[2]) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    
    return 0;
}