#include <iostream>
using namespace std;

int Pairing(int n){
    if(n==0||n==1||n==2){
        return n;

    }
    return Pairing(n-1)+Pairing(n-2)*(n-1);
}

    

int main()
{
    cout << Pairing(4) << endl;
    return 0;
}