#include<iostream>

using namespace std;

long long int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    
    int t, i;
    long long int a, b, g, l;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%lld %lld", &a, &b);
        g = gcd(a,b);
        l = (a*b)/g;
        printf("%lld %lld\n", g, l);
    }
    
    return 0;
}