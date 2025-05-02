#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> names;
    vector<int> numbers(5);
    vector<int> nums{0,1,2,3};
    vector<bool> isTeacher(5,true);
    for(int i = 1; i <= 5; ++i)
    {   string str;
        getline(cin,str);
        names.push_back(str);
    }
    // OUTPUT
    for (string str :names){cout << str << ",";}
    cout << endl;
    for (int val : numbers){cout << val << " ";}
    cout << endl;   
    for (int val : nums){cout << val << " ";}
    cout << endl;
    for (bool val : isTeacher){cout << val << " ";}
    cout << endl;
    return 0;
}