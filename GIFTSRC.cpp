#include<iostream>

using namespace std;

int main() {

    int t, i, j, n, x, y;
    string s;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        cin>>s;
        x = 0;
        y = 0;
        for(j=0; j<n; j++) {
            if(s[j-1] == s[j] || (s[j-1] == 'R' && s[j] == 'L') || (s[j-1] == 'L' && s[j] == 'R') || (s[j-1] == 'U' && s[j] == 'D') || 
            (s[j-1] == 'D' && s[j] == 'U')) {
                continue;
            }
            else {
                if(s[j] == 'L') {
                    x = x-1;
                }
                else if(s[j] == 'R') {
                    x = x+1;
                }
                else if(s[j] == 'U') {
                    y = y+1;
                }
                else {
                    y = y-1;
                }
            }
        }
        cout<<x<<" "<<y<<"\n";
    }

    return 0;
}