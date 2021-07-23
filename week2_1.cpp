#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int k){
    int low,mid,high;
    low = 0;
    high = n-1;
    while(low<=high){
    mid = (low+high)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]>k){
            high = mid -1;
        }
        else low = mid+1;
    }
    return -1;
}
int main(){
   int t;
   cin>>t;
   while(t--){
        int n,k,l,h,c;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    sort(arr,arr+n);
    int ans = binarySearch(arr,n,k);
    if(ans<0){
        cout<<"Not Present"<<endl;
    }
    else {
         c = 1;
         l = ans -1;
         h = ans + 1;
         while(arr[l]==k){
             c++;
             l--;
         }
         while(arr[h]==k){
             c++;
             h++;
         }
         cout<<k<<" - "<<c<<endl;
    }
   }
    return 0;
    
}



//Input
2
10
235 235 278 278 763 764 790 853 981 981
981
15
1 2 2 3 3 5 5 5 25 75 75 75 97 97 97
75

//Output
981 - 2
75 - 3
