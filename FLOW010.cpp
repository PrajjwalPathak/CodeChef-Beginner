#include<iostream>

using namespace std;

int main() {
  
    int t, i;
    char id;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf(" %c", &id);
        if(id == 'B' || id == 'b') {
            printf("BattleShip\n");
        } 
        else if(id == 'C' || id == 'c') {
            printf("Cruiser\n");
        } 
        else if(id == 'D' || id == 'd') {
            printf("Destroyer\n");
        } 
        else if(id == 'F' || id == 'f') {
            printf("Frigate\n");
        }
    }
    
    return 0;
}