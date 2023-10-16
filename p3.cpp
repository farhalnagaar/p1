#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int a,b,c;
    cin >> a>>b>>c;
    if (a>b && a>c && b>c && c<a){
        //swap (a ,b);
        cout << c<< "   "<<b<<"  " << a;
    }
    else if (b>a && b>c && c<a &&c<b ){
        //swap (b ,c);
        cout << c<< "   "<<a<<"  "<< b;
    }
    else if (b>a && b>c && c>a && c<b){
        //swap (a ,c);
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
