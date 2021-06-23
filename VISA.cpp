#include<iostream>

using namespace std;

int main() {
  
    int t, x1, x2, y1, y2, z1, z2, i;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i<t; i++) {
        scanf("%d %d %d %d %d %d", &x1, &x2, &y1, &y2, &z1, &z2);
        if(x2>=x1 && y2>=y1 && z2<=z1) {
            arr[i] = 1;
        }
        else {
            arr[i] = 0;
        }

    }
    for(i=0; i<t; i++)  {
        if(arr[i] == 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
    
}