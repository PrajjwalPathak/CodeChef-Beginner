#include<iostream>

using namespace std;

int main() {
  
    int t, i, c;
    string s;
    cin>>t;
    while(t--) {
        c = 0;
        cin>>s;
        for(i=0; i<s.length(); i++) {
            if(s[i] == '1' && s[i] != s[i-1]) {
                c++;
            }
            else {
                continue;
            }
        }
        cout<<c<<"\n";
    }
    
    return 0;
}