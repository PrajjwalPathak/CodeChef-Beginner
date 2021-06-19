#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> finalM;
    int t, i, n, x, s, r, j, max, temp;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i<t; i++) {
        scanf("%d %d", &n, &x);
        for(j=0; j<n; j++) {
            scanf("%d %d", &s, &r);
            if(s <= x) {
                finalM.push_back(r);
            }
        }
        max = 0;
        for(j=0; j<finalM.size(); j++) {
            if(max < finalM[j]) {
                temp = max;
                max = finalM[j];
                finalM[j] = temp;
            }
        }
        arr[i] = max;
    }
    for(i=0; i<t; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}