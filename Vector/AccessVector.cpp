#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(5);
    for(int i = 0; i < 5; i++)
    {
        vec[i] = i+1;
        cout << vec[i] << " ";
    }
    
    cout << endl;
    cout << vec[4];

    return 0;
}