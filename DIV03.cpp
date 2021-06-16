#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t, k, i, j, diff = 10;
    cin>>t;
    vector<int> diffArray;
    int arr[10];
    for(i=0; i<t; i++) {
        for(j=0; j<10; j++) {
            cin>>arr[j];
        }
        cin>>k;
        for(j=10; j>0; j--) {
            if(arr[j-1] <= k) {
                k = k-arr[j-1];
                diff = j-1;
            }
            else {
                break;
            }
        }
        diffArray.push_back(diff);
    }
    for(i=0; i<t; i++) {
        cout<<diffArray[i]<<"\n";
    }
    return 0;
}