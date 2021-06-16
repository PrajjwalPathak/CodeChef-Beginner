#include<iostream>

using namespace std;

int main() {
    int r, o, c, score;
    cin>>r>>o>>c;
    if((((20-o)*36)+c) > r) {
        cout<<"YES";
    } 
    else {
        cout<<"NO";
    }  
    
    return 0;
}