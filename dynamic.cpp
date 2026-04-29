#include <iostream>
using namespace std;
int main(){
    int*p = new int;
    *p = 10;
    cout << *p << endl;
    delete p;
    

    int size;
    cin >> size;
    char* str = new char[size];
    cin >> str;
    cout << str;
    delete []str;
    return 0;
}