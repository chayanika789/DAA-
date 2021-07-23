#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,key,c=0,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    for(i=0;i<n;i++){
        c++;
        if(arr[i]==key){
            cout<<"Present "<<c<<endl;
            break;
        }
        if(i==n-1){
            cout<<"Not present "<<c<<endl;
        }
    }
    }
    return 0;
}



// Input and Output
3
8
34  35  65  31  25  89  64  30
89
Present 6
5
977  354  244  546  356 
244
Present 3
6
23  64  13  67  43  56
63
Not present 6
