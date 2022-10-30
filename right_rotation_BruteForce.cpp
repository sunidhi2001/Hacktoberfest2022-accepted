#include<bits/stdc++.h>
using namespace std;
int main() {
 int t; cin>>t;
 while(t--){
 	int n,k,i,j;
 	cin>>n>>k;
    int arr[n],temp[k];
    for(i=0;i<n;i++){ 
        cin>>arr[i];
    }
 	for(i=n-k,j=0;i<=n,j<k;i++,j++){ 
 		temp[j]=arr[i];
 	}
 	for(i=n-k;i>=0;i--){ 
       arr[i+k]=arr[i];
 	}
 	for(i=0;i<k;i++){ 
  	arr[i]=temp[i];
 	 } 
    for(i=0;i<n;i++){
      cout<<arr[i]<<" ";
}
}
 return 0;
}