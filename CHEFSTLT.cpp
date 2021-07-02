#include<iostream>

using namespace std;

int main() {
    int t, i, j, cmin, cmax;
    string s1, s2;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>s1;
        cin>>s2;
        cmin = 0;
        cmax = 0;
        for(j=0; j<s1.length(); j++) {
            if(s1[j] != '?' && s1[j] != s2[j] && s2[j] != '?') {
                cmin++;
            }
            if(s1[j] == '?' && s2[j] != '?' || s2[j] == '?' && s1[j] != '?') {
                cmax++;
            }
            if(s1[j] == '?' && s2[j] == '?') {
                cmax++;
            }
        }
        cmax = cmax + cmin;
        cout<<cmin<<" "<<cmax<<"\n";

    }
    return 0;
}