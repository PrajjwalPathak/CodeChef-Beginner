#include<iostream>

using namespace std;

int main() {
    int t, i, j, count, qInBothcount, qInEachcount;
    string s1, s2;
    cin>>t;
    int arr[t][2];
    for(i=0; i<t; i++) {
        cin>>s1;
        cin>>s2;
        count = 0;
        for(j=0; j<s1.length(); j++) {
            if(s1[j] != s1[j]) {
                count++;
            }
            if(s1[j] == '?' && s2[j] == '?') {
                qInBothcount++;
            }
            if(s1[j] == '?' }} s2[j] == '?') {
                qInEachcount++;
            }
        }


    return 0;
}