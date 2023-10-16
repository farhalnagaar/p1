#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int num ;
    cout <<"enter num=   ";
    cin >>num;
    if (num %4==0 &&num %2==0 &&num> 0){
        cout <<" lucky even";
    }
    if (num %7==0&&num %2!=0&&num> 0){
        cout <<" lucky odd";
    }
    if (num %4!=0 &&num %2==0&&num> 0){
        cout <<" unlucky even";
    }
    if (num %7!=0&&num %2!=0&&num> 0){
        cout <<" unlucky odd";
    }
    return 0;
}
