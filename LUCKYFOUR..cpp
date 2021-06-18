#include<iostream>

using namespace std;

int main() {
    int t, i, j, count;
    string num;
    cin>>t;
    int arr[t];
    for(i=0; i<t; i++) {
        cin>>num;
        count = 0;
        for(j=0; j<num.length(); j++) {
            if(num[j] == '4') {
                count++;
            }
        }
        arr[i] = count;
    }
    for(i=0; i<t; i++) {
        cout<<arr[i]<<"\n";
    }
    return 0;
}