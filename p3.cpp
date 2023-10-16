#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int a,b,c;
    cin >> a>>b>>c;
    if (a>b && a>c && b>c && c<a){
        
        cout << c<< "   "<<b<<"  " << a;
    }
    else if (b>a && b>c && c<a &&c<b ){
        
        cout << c<< "   "<<a<<"  "<< b;
    }
    else if (b>a && b>c && c>a && c<b){
        
        cout << a<< "   "<<c <<"  "<< b;}

    else if (c>a && c>b && b>a && b<c){
        cout << a<< "   "<<b <<"  "<< c;
    }
    else if (a>b  && c>a &&b<c ){
        cout << b<<"  "<<a<<"  "<<c;
    }
    else if (a>b && a>c && b<c && c< a){
        cout << b<<"  "<<c<<"  "<<a;
    }


    return 0;
}
