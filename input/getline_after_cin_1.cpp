#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int num;
    string str;
    cout << "Enter a number: ";
    cin >> num;
    cin.ignore(); // ignore the '\n' character (預設是忽略一個字元)

    for(int i = 1; i <= num; i++)
    {   
        cout << "[" << i << "] Enter a string: "; 
        getline(cin, str);
        cout << "Your Entered String: \"" << str << "\"" << endl;
    }
    
    return 0;
}