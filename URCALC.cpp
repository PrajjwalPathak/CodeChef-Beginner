#include<iostream>
#include <iomanip>

using namespace std;

int main() {
  
    double a, b, d;
    char c;
    cin>>a>>b>>c;
    if(c == '+') {
        d = a+b;
        cout<<fixed<<setprecision(6)<<d;
    }
    else if(c == '-') {
        d = a-b;
        cout<<fixed<<setprecision(6)<<d;
    }
    else if(c == '*') {
        d = a*b;
        cout<<fixed<<setprecision(6)<<d;
    }
    else {
        d = a/b;
        cout<<fixed<<setprecision(6)<<d;
    }
    
    return 0;
}