#include<iostream>
#include<vector>

using namespace std;

int min(vector<int> a) {
    int min, i;
    min = a[0];
    for(i=0; i<a.size(); i++) {
        if(min > a[i]) {
            min = a[i];
        }
    }
    return min;
}

int find(vector<int> a, int data) {
    int pos, i;
    for(i=0; i<a.size(); i++) {
        if(a[i] == data) {
            pos = i;
            break;
        }
    }
    return pos;
}

int main() {
  
    int t, n, i, d;
    cin>>t;
    int res[t];
    vector<int> arr;
    for(i=0; i<t; i++) {
        cin>>n;
        arr.push_back(n);
    }
    for(i=0; i<t; i++) {
        res[i] = min(arr);
        d = find(arr, res[i]);
        arr.erase(arr.begin()+d);
        cout<<res[i]<<"\n";
    }

    return 0;
}