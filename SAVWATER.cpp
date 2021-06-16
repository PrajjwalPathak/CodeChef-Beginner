#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t, h, x, y, c, i;
    vector<string> arr;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>h>>x>>y>>c;
        if((h*(x+(y/2))) <= c) {
            arr.push_back("YES");
        }
        else {
            arr.push_back("NO");
        }
    }
    for(i=0 ; i<t; i++) {
        cout<<arr[i]<<"\n";
    }
    return 0;
}