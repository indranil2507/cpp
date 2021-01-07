#include<iostream>
using namespace std;

int main(){
    int marks[] = {23,45,56,89};
    
    for(int i=0;i<4;i++){
        cout<<"The value of marks " <<i<<marks[i]<<endl;

    }

    int* p = marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    return 0;
}