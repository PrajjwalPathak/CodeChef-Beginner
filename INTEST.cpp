
#include<iostream>
using namespace std;
int main() {
    
    int n=0,k=0,i=0,count=0;
   
    scanf("%d %d",&n,&k);
  
    int a[n];
  
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
     
        if(a[i]%k==0) {
            count+=1;
        }
    }
   
    printf("%d",count);
    return 0;
    
}