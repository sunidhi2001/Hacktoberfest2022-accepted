#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        if(i<=(n/2)+1){
            int spaces1=1;
            while(spaces1<=(n/2)-i+1){
                cout<<" ";
                spaces1++;
            }
            int j=1;
            while(j<=(2*i)-1){
                cout<<"*";
                j++;
            }
            cout<<endl;
            i++;
        }

        else{
            int spaces2=1;
            while(spaces2<=i-1-(n/2)){
                cout<<" ";
                spaces2++;
            }int k=1;
            while(k<=2*(n-i)+1){
                cout<<"*";
                k++;
                }
            cout<<endl;
            i++;    
        }
    }
    return 0;
}
