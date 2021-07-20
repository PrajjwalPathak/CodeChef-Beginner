#include<iostream>

using namespace std;

int main() {

    int t, i, j, n, maxa, maxb, suma, sumb;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        int a[n];
        int b[n];
        suma = 0;
        sumb = 0;
        maxa = 0;
        maxb = 0;
        for(j=0; j<n; j++) {
            cin>>a[j];
            suma = suma + a[j];
            if(maxa < a[j]) {
                maxa = a[j];
            }
        }
        for(j=0; j<n; j++) {
            cin>>b[j];
            sumb = sumb + b[j];
            if(maxb < b[j]) {
                maxb = b[j];
            }
        }
        if((suma-maxa) < (sumb-maxb)) {
            cout<<"Alice\n";
        }
        else if((suma-maxa) > (sumb-maxb)) {
            cout<<"Bob\n";
        }
        else {
            cout<<"Draw\n";
        }
    }

    return 0;
}