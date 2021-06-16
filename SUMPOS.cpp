#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t, x, y, z, i;
    vector<string> arr;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>x>>y>>z;
        if(x+y == z || x+z == y || y+z == x) {
            arr.push_back("YES");
        }
        else {
            arr.push_back("NO");
        }
    }
    for(i=0; i<t; i++) {
        cout<<arr[i]<<"\n";
    }
    return 0;
}