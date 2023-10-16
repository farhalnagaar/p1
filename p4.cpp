#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int w;
    cout <<"Enter THE WEIGHT =   " ;
    cin >> w ;
    if (w !=2 && w %2==0){
        cout << "YES";
    }else {
    cout << "NO";}
    return 0;
}
