#include<iostream>

using namespace std;

int main() {
  
    int t, i, a, b, c;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(a+b+c == 180) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    
    return 0;
}