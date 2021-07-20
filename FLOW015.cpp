#include<iostream>

using namespace std;

int checkLeapYear(int year) {
    
    if (year % 400 == 0)
        return 1;
 
    if (year % 100 == 0)
        return 0;
 
    if (year % 4 == 0)
        return 1;
    return 0;
}

int main() {

    int t, i, j, y, c, count, diff, day;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>y;
        count = 0;
        if(y==2001) {
            cout<<"monday\n";
        }
        else {
            if(y>2001) {
                diff = y - 2001;
                for(j=2002; j<=y; j++) {
                    c = checkLeapYear(j);
                    if(c == 1) {
                        count++;
                    }
                }
            }
            else {
                diff = 2001 - y;
                for(j=2000; j>=y; j--) {
                    c = checkLeapYear(j);
                    if(c == 1) {
                        count++;
                    }
                }
            }
            day = ((365*(diff-count)) + (count*366))%7;
            
            switch(day) {
                case 0:
                    cout<<"monday\n";
                    break;
                case 1:
                    cout<<"tuesday\n";
                    break;
                case 2:
                    cout<<"wednesday\n";
                    break;
                case 3:
                    cout<<"thursday\n";
                    break;
                case 4:
                    cout<<"friday\n";
                    break;
                case 5:
                    cout<<"saturday\n";
                    break;
                case 6:
                    cout<<"sunday\n";
                    break;
                default:
                    cout<<"monday\n";
                    break;
            }
        }
    }

    return 0;
}