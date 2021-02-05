#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int max=a[0],record=0;
    
    for(int i=0;i<n-1;i++){
        if(i!=0){
            if(a[i]>max){
                max=a[i];
                record++;
                

            }
            cout<<record<<endl;
        }
        else if(i==0){
            if(a[i]>a[i+1]){
                record++;
            }
        }
       
        else{
            break;
        }
    }

    cout<<"the number of record days is "<<record+1<<endl;
    cout<<max;
    return 0;      
}