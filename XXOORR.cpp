#include<iostream>

using namespace std;

long int gcd(long int a, long int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
long int findGCD(long int a[], int n) {
    int i;
    int result = a[0];
    for (i = 1; i < n; i++) {
        result = gcd(a[i], result);
 
        if(result == 1) {
           return 1;
        }
    }
    return result;
}

int main() {
    int t, i, j, n, k;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n>>k;
        int a[n];
        for(j=0; j<n; j++) {
            cin>>a[j];
        }
        for(j=0; j<k; j++) {
            
        }

    }

    return 0;
}