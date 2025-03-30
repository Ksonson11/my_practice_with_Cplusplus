#include <iostream>
using namespace std;

int main()
{   
    cout << "Enter something: ";
    char ch[20];
    cin.getline(ch,10);
    cout << ch << endl;
    return 0;
}