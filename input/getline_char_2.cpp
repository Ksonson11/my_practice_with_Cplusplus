#include <iostream>
using namespace std;

int main()
{   
    cout << "Enter something: ";
    char ch[20];
    cin.getline(ch,20,'h'); // 可以指定字元
    cout << ch << endl;
    return 0;
}