#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, i, flag = 0;
    vector<int> arr;
    scanf("%d", &n);
    for(i=1; i<n/2; i++) {
        if(n%i == 0) {
           arr.push_back(i); 
        }
    }
    for(i=0; i<arr.size(); i++) {
        if(arr[i] <= 10) {
            flag = i;
            continue;
        }
        else {
            break;
        }
    }
    printf("%d", arr[i-1]);
    return 0;
}