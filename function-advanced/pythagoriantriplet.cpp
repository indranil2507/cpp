#include<iostream>

using namespace std;

bool check(int a,int b,int c){
    int h,bs,s;

    h=max(a,max(b,c));
    if (a==h){
        bs=b;
        s=c;
    }
    else if (b==h){
        bs=a;
        s=c;
    }
    else {
        bs=b;
        s=a;
    }
    if(h*h==bs*bs+s*s){
        return true;
    }
    else{
        return false;
    }

}

 int main(){
     int a,b,c;
      cin>>a>>b>>c;

      if(check(a,b,c)){
          cout<<"Pythagorian triplet"<<endl;
      }
      else{
          cout<<"Not a pythagorian triplet"<<endl;
      }

    return 0;
 }