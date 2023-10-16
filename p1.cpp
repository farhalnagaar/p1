#include <iostream>

using namespace std;

int main()
{

    cout << "Hello world!" << endl;
    int age;
    cout << "enter the age" ;
    cin>> age;

    if (age %2 ==0){
        cout<< "lucky"<<endl;
    }
    else {
        cout<<"unlucky"<<endl;
    }
    return 0;
}
