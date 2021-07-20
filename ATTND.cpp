#include<iostream>
#include<vector>

using namespace std;

int main() {

    int t, i, j, k, n;
    vector<int> a;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        string s[n][2];
        for(j=0; j<n; j++) {
            cin>>s[j][0]>>s[j][1];
        }
        for(j=0; j<n-1; j++) {
            if(s[j][0] == s[j-1][0]) {
                continue;
            }
            for(k=j+1; k<n; k++) {
                if(s[j][0] == s[k][0]) {
                    a.push_back(k);
                }
            }
        }
        

    }

    return 0;
}