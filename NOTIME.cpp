#include<iostream>

using namespace std;

int main() {
  
    int n, h, x, i, f = 0;
    cin>>n>>h>>x;
    int t[n];
    for(i=0; i<n; i++) {
        cin>>t[i];
        if((h-x) == t[i]) {
            f = 1;
        }
    }
    if(f == 1) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    
    return 0;
}