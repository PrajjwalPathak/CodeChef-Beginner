#include<iostream>
#include<cmath>

using namespace std;

int main() {
  
    int t, n, f, l, d;
    cin>>t;
    while(t--) {
        f = 0, l = 0;
        cin>>n;
        d = log10(n);
        f = n/pow(10,d);
        l = n%10;
        cout<<f+l<<"\n";
    }

    return 0;
}