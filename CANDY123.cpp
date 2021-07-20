#include<iostream>

using namespace std;

int main() {
    int t, i, j, a, b;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>a>>b;
        j = 1;
        while(true) {
            a = a-j;
            if(a<0 || b<0) {
                break;
            }
            j++;
            b = b-j;
            j++;
            if(a<0 || b<0) {
                break;
            }
        }
        
        if(a < b) {
            cout<<"Bob"<<"\n";
        }
        else {
            cout<<"Limak"<<"\n";
        }
    } 
    
    return 0;
}