#include<iostream>
using namespace std;

struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};



int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = breakfast;
    cout<<m1<<endl;
    struct employee harry;
    harry.eId = 1;
    harry.salary = 12000000;

    cout<<harry.eId <<endl;
    cout<<harry.salary<<endl;
   
    return 0;

}