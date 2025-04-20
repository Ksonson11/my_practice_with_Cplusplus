#include <iostream>
using namespace std;

int main()
{
    int a;
    for(int i = 0; i <= 10; i++)
    {
        if(i < 5) continue;
        cout << i << endl;
    }
    cout << "The program is over" << endl;

    return 0;
}