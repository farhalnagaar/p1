#include <iostream>

using namespace std;

int main()
{

    cout << "Hello world!" << endl;
    int wiegh;
    cout << "enter the wiegh" ;
    cin>> wiegh;

    if (wiegh %2 ==0){
        cout<< "lucky"<<endl;
    }
    else {
        cout<<"unlucky"<<endl;
    }
    return 0;
}
