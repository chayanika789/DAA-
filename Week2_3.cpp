#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       int n,k,c=0;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
     cin>>arr[i];
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(fabs(arr[i]-arr[j])==k)
             c++;
        }
    }
    cout<<c<<endl;
   }
    return 0;
}


// Input
2 
5 
1 51 84 21 31
20
10
24 71 16 92 12 28 48 14 20 22
4

//Output
2
4
