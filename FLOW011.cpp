#include<iostream>

using namespace std;

int main() {
    
    int t, i;
    double n;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%lf", &n);
        if(n < 1500) {
            n = n*2;
        }
        else {
            n = n + 500 + (n*0.98);
        }
        printf("%0.2lf\n", n);
    }
    
    return 0;
}