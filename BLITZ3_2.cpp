#include <iostream>

using namespace std;

int main() {

    int t, n, a, b, c, time, i;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %d %d", &n, &a, &b);
        time = (2*(180 + n)) - a - b;
        printf("%d\n", time);
    }
    
    return 0;
}
