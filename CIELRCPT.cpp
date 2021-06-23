#include<iostream>
#include<cmath>

using namespace std;

int main() {
  
    int t, i, p, c, m, menu;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &p);
        menu = 0;
        while(p > 0) {
            c = 1;
            m = 0;
            while(c <= p && c <= 2048) {
            c = c * 2;
            m++;
            }
            p = p - pow(2,m-1);
            menu++;
        }
        cout<<menu<<"\n";
    }
    
    return 0;
}