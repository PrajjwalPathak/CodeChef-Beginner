#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
int findGCD(vector<int> a, int n) {
    int i;
    int result = a[0];
    for (i = 1; i < n; i++) {
        result = gcd(a[i], result);
 
        if(result == 1) {
           return 1;
        }
    }
    return result;
}

int main() {
    int t, i, j, n, e; 
    int g1, g2, sum, max;
    vector<int> a;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        sum = 0;
        max = 0;
        for(j=0; j<n; j++) {
            cin>>e;
            a.push_back(e);
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        g1 = findGCD(a, n);
        a.pop_back();
        g2 = findGCD(a, n-1);
        max = a[0];
        
        for(j=0; j<n; j++) {
            if(max < a[j]) {
                max = a[j];
            }
        }

        if(g1 == g2) {
            for(j=0; j<n-1; j++) {
                a[j] = a[j]/g1;
                sum = sum + a[j];
            }
            sum = (sum - (max/g1)) + 2;
        }
        else {
            for(j=0; j<n-1; j++) {
                a[j] = a[j]/g2;
                sum = sum + a[j];
            }
            sum = sum + 1;
        }
        cout<<sum<<"\n";
    }

    return 0;
}