#include<iostream>

using namespace std;

int main() {
  
    int t, i, j, a, b;
    string s;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>s;
        a = 0; 
        b = 0;
        for(j=0; j<s.length(); j++) {
            if(s[j] == 'a') {
                a++;
            }
            else {
                b++;
            }
        }
        if(a > b) {
                cout<<b<<"\n";
            }
            else if(a == b) {
                cout<<b<<"\n";
            }
            else {
                cout<<a<<"\n";
            }
        
    }
    
    return 0;
}