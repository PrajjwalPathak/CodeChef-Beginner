#include<iostream>

using namespace std;

int main() {
  
    int t, i, n, c;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        c = 0;
        c = c + (n/100);
        n = n%100;
        c = c + (n/50);
        n = n%50;
        c = c + (n/10);
        n = n%10;
        c = c + (n/5);
        n = n%5;
        c = c + (n/2);
        n = n%2;
        c = c + n;
        printf("%d\n", c);
    }
    
    return 0;
}