#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int a,b,c ;
    int d =20;
    cout << "Enter a=  ";
    cin >> a;
    cout << "Enter b=  ";
    cin >> b;
    cout << "Enter c=  ";
    cin >> c;

    //d=a+b+c;
   // d1=a*b*c;
   // d2=a-b-c;
    if (d=a+b+c){
        cout << "yes , a+b+c=d"<< endl;
    }
     // else if (d=a*b*c){
        //cout << "yes , a*b*c=d"<< endl;
    //}
      //else if (d=a-b-c){
       // cout << "yes , a-b-c=d"<< endl;
    //}
    else {
        cout << "no"<< endl;
    }
    return 0;
}
