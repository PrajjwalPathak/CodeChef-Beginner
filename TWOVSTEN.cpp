#include <iostream>

using namespace std;

int main() {

    int t, x, i;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &x);
        if(x%10 == 0) {
            printf("0\n");
        }
        else if(x%10 == 5) {
            printf("1\n");
        }
        else {
            printf("-1\n");
        }
    }
    
    return 0;
}
