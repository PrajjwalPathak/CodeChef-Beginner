#include<iostream>

using namespace std;

int main() {
  
    int t, i, n, rev;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        rev = 0;
        while(n != 0) {
            rev = rev + n%10;
            rev = rev*10;
            n = n/10;
        }
        cout<<rev/10<<"\n";
    }

    return 0;
}