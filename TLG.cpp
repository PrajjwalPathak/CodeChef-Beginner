#include<iostream>

using namespace std;

int main() {
  
    int n, i, s, t, w, l, d = 0, wf, lf, st = 0, tt = 0;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>s>>t;
        st = st + s;
        tt = tt + t;
        
        if(st>tt) {
            w = 1;
            l = st - tt;
        }
        else {
            w = 2;
            l = tt - st;
        }
        if(l > d) {
            d = l;
            lf = l;
            wf = w;
        }
        else {
            continue;
        }
    }
    
    cout<<wf<<" "<<lf;
    return 0;
}