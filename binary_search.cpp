include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
  int n,i,key,c=0,mid,low,high,flag=-1;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++){
   cin>>arr[i];
  }
  cin>>key;
  sort(arr,arr+n);

   low = 0;
   high = n-1;

   
   while(high>=low){
       mid = floor((low+high)/2);
       c++;
       if(arr[mid]==key){
           cout<<"Present "<<c<<endl;
           flag = 1;
           break;
       }
       else if(key<arr[mid]){
           high = mid-1;
           c++;
           continue;
       }
       else {
           low = mid + 1;
           c++;
       }
   }
   if(flag<0)
   {
       cout<<"Not Present "<<c<<endl;
   }
  }
   return 0;
}



// Input and Output
3
8
34  35  65  31  25  89  64  30
89
Present 7
5
977  354  244  546  356 
244
Present 3
6
23  64  13  67  43  56
63
Not Present 6
