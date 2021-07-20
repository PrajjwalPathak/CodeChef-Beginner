#include<iostream>

using namespace std;

int main() {
  
    int t, i, j, f;
    string s;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>s;
        f = 0;
        for(j=0; j<s.length(); j = j+2) {
            if(s[j] == s[j+1]) {
                f = 1;
                break;
            }
        }
        if(f == 0) {
            cout<<"yes\n";
        }
        else {
            cout<<"no\n";
        }
    }
    
    return 0;
}