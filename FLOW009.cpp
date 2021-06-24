#include<iostream>

using namespace std;

int main() {
    
    int t, i;
    long int q, p;
    double e;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%ld %ld", &q, &p);
        e = q*p;
        if(q > 1000) {
            e = e - (e*0.1);
        }
        printf("%0.6lf\n", e);
    }
    
    return 0;
}