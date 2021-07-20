#include<iostream>

using namespace std;



int main() {
    int n, r, R, i;
    cin>>n>>r;
    for(i=0; i<n; i++) {
        cin>>R;
        if(R>=r) {
            cout<<"Good boi"<<"\n";
        }
        else {
            cout<<"Bad boi"<<"\n";
        }
    } 
    
    return 0;
}