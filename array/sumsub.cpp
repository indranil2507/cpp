#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum=0;
    int curr = 0;
    for(int i=0;i<n;i++){
       curr=0;
       for(int j=i;j<n;j++){
           curr+=arr[j];
           // cout<<curr<<endl;

       }
       maxSum= max(maxSum,curr);

    }
    cout<<maxSum<<endl;

    return 0;
    

   
}