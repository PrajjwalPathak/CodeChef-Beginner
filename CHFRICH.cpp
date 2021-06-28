#include <iostream>

using namespace std;

int main() {

    int t, a, b, x, i;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d %d", &a, &b, &x);
        a = (b - a)/x;
        printf("%d\n", a);
    }
    
    return 0;
}
