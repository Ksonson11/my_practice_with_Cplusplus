#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    // 注意setfill中放的是(' ') 而不是 (" ")
    cout << setw(10) << setfill('*') << "" << endl;
    cout << setw(10) << 2025 << endl;
    cout << setw(10) << setfill(' ') << 50 << endl;
    

    return 0;
}