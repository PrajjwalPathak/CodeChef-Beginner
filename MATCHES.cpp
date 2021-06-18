#include<iostream>
#include<string>

using namespace std;

int main() {
    int t, i, j, a, b, s;
    string c;
    cin>>t;
    int arr[t];
    for(i=0; i<t; i++) {
        scanf("%d %d", &a, &b);
        s = 0;
        a = a + b;
        c = to_string(a);
        for(j=0; j<c.length(); j++) {
            
            switch(c[j]) {
                case '0': case '6': case '9':
                s = s + 6;
                break;

                case '1':
                s = s + 2;
                break;

                case '2': case '3': case '5':
                s = s + 5;
                break;

                case '4':
                s = s + 4;
                break;

                case '7':
                s = s + 3;
                break;

                case '8':
                s = s + 7;
                break;

                default:
                printf("default");
            } 
        }
        arr[i] = s;
    }
    for(i=0; i<t; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}