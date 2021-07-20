#include<iostream>

using namespace std;

int main() {
  
    int n, i, j, a = 0;
    string u;
    cin>>n;
    while(n--) {
        cin>>u;
        for(i=0; i<u.length()-1; i++) {
            if(u[i] == 'c') {
                if(u[i+1] == 'h') {
                    a++;
                    break;
                }
            }
            else if(u[i] == 'h') {
                if(u[i+1] == 'e') {
                    a++;
                    break;
                }
            }
            else if(u[i] == 'e') {
                if(u[i+1] == 'f') {
                    a++;
                    break;
                }
            }
        }
    }
    cout<<a;
    
    return 0;
}