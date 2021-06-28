#include <iostream>

using namespace std;

int main() {

    int t, a, b, c, d, i;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a+c == 180 && b+d == 180) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    
    return 0;
}
