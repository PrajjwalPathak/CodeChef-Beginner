#include<iostream>

using namespace std;

int main() {
    int t, i, j, n, b, w, h, p, wm, hm;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n>>b;
        wm = 0, hm = 0;
        for(j=0; j<n; j++) {
            cin>>w>>h>>p;
            if(p <= b) {
                if(w*h > wm*hm) {
                    wm = w;
                    hm = h;
                }
            }
        }
        if(wm*hm == 0) {
            cout<<"no tablet\n";
            
        }
        else {
            cout<<wm*hm<<"\n";
        }
    }

    return 0;
}