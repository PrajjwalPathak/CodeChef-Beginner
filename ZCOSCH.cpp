#include<iostream>

using namespace std;

int main() {
    int r;
    cin>>r;
    if(r >= 1 && r <= 50) {
        cout<<100;
    }
    else if(r >= 51 && r <= 100) {
        cout<<50;
    }
    else {
        cout<<0;
    }

    return 0;
}