#include<iostream>

using namespace std;

int main() {
  
    int t, i, h, ts;
    float cc;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d %f %d", &h, &cc, &ts);
        if(h>50 && cc<0.7 && ts>5600) {
            printf("10\n");
        } 
        else if(h>50 && cc<0.7 && ts<=5600) {
            printf("9\n");
        }  
        else if(h<=50 && cc<0.7 && ts>5600) {
            printf("8\n");
        } 
        else if(h>50 && cc>=0.7 && ts>5600) {
            printf("7\n");
        }
        else if(h>50 || cc<0.7 || ts>5600) {
            printf("6\n");
        }
        else if(h<=50 && cc>0.7 && ts<=5600) {
            printf("5\n");
        }
    }
    
    return 0;
}