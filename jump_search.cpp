#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,i,low,high,m,key,c=0,flag = -1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>key;
    m = sqrt(n);  
    low = 0;
    high = m;
    while(arr[high]<key and high<n){
        c++;
        low = high;
        high = high + m;
        if(high>n-1){
            high = n;
        }
    }
    for(i=low;i<high;i++){
        if(arr[i]==key){
            c++; 
            cout<<"Present "<<c<<endl;
            flag = 1;
            break;
        }
        else c++;
    }
    if(flag<0)
       cout<<"Not Present "<<c<<endl;
    }
    return 0;
}

// input and output
3
8
34  35  65  31  25  89  64  30
89
Present 5
5
977  354  244  546  356 
244
Present 1
6
23  64  13  67  43  56
63
Not Present 3
