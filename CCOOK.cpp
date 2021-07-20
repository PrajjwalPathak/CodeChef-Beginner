#include<iostream>

using namespace std;

int main() {
  
    int n, i, j, sum;
    int a[5];
    cin>>n;
    string s[n];
    for(i=0; i<n; i++) {
        sum = 0;
        for(j=0; j<5; j++) {
            cin>>a[j];
            sum = sum + a[j];
        }
        if(sum == 0) {
            s[i] = "Beginner";
        }
        else if(sum == 1) {
            s[i] = "Junior Developer";
        }
        else if(sum == 2) {
            s[i] = "Middle Developer";
        }
        else if(sum == 3) {
            s[i] = "Senior Developer";
        }
        else if(sum == 4) {
            s[i] = "Hacker";
        }
        else {
            s[i] = "Jeff Dean";
        }
    }
    for(i=0; i<n; i++) {
        cout<<s[i]<<"\n";
    }
    
    return 0;
}