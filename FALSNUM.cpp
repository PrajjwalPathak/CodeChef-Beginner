#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int t, i, j, d;
    long long a, l;
    vector<int> c;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%lld", &a);
        c.clear();
        d = log10(a) + 1;
        l = pow(10,d-1);
        if(a/l > 1) {
            while(a > 0) {
                c.push_back(a%10);
                a = a/10;
            }
            c.push_back(1);
        }
        else if(a/l == 1) {
            while(a > 10) {
                c.push_back(a%10);
                a = a/10;
            }
            c.push_back(0);
            c.push_back(1);
        }
        for(j=c.size()-1; j>=0; j--) {
            printf("%d", c[j]);
        }
        printf("\n");
    }
    
    return 0;
}
