#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int x,y,r,s,p;
    cout << "enter x";
    cin >> x;
    cout << "enter y";
    cin >> y;
    r=0;
    s=1;
    p=2;
    if (x==0 && y==1){
        cout <<p;
    }
    if (x==1 && y==0){
        cout <<p;
    }
    if (x==2 && y==1){
        cout <<r;
    }
    if (x==1 && y==2){
        cout <<r;
    }
    if (x==0 && y==2){
        cout <<s;
    }
    if (x==2 && y==0){
        cout <<s;
    }
    return 0;
}
