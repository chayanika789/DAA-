#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,i,j,k,flag=0;
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(arr[i]+arr[j]==arr[k]){
                    flag = 1;
                    cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                }
            }
        }
    }
    if(flag==0){
        cout<<"No Sequence Found"<<endl;
    }
    }
    return 0;
}


//Input
3 
5 
1  5  84  209  341 
10
24 28 48 71 86 89 92 120 194 201
15
64 69 82 95 99 107 113 141 171 350 369 400 511 590
66


//Output
No Sequence Found
2,7,8
1,6,9
