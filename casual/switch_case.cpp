#include <iostream>
using namespace std;

int main()
{   
    int a;
    cout << "please input a number between 1 and 6: " << endl;
    while (cin >> a)
    {
        cout << "please input a number between 1 and 6: " << endl;
        switch (a)
        {
            case 1:
                cout << "a is 1" << endl;
            case 2:
                cout << "a is 2" << endl;
            case 3:
                cout << "a is 3" << endl;
            case 4:
                cout << "a is 4" << endl;
            case 5:
                cout << "a is 5" << endl;
                break;
            case 6:
                cout << "a is 6" << endl;
            break;
            default:
                cout << "a is not in the range of 1 to 6" << endl;
                continue;
        }
        break;
    }
     return 0;
}