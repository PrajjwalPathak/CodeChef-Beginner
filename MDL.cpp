#include<iostream>

using namespace std;

int main() {
  
    int t, n, i, max, min, ma, mi;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n];
        max = 0;
        min = 109;
        for(i=0; i<n; i++) {
            cin>>a[i];
            if(max < a[i]) {
                max = a[i];
                ma = i;
            }
            if(min > a[i]) {
                min = a[i];
                mi = i;
            }
        }
        if(ma>mi) {
            cout<<min<<" "<<max<<"\n";
        }
        else {
            cout<<max<<" "<<min<<"\n";
        }
    }
    
    return 0;
}