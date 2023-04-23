#include<iostream>
using namespace std;
int maxoddeven(int arr[],int n){
    int curr=1,res=1;
    for(int i=1;i<n;i++){
        if((arr[i-1]%2==0 && arr[i]%2!=0) || arr[i]%2==0 && arr[i-1]%2!=0){
            curr++;
            res=max(res,curr);
        }
        else{
            curr=1;
        }
      
    }
    return res;
}
int main(){
    int arr[]={10,15,16,17,20,22,};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxoddeven(arr,n);
}