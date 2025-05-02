#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector 創建
    vector<int> vec;
    // .resize(n) 改vector的size
    vec.resize(3);
    for (int val : vec){cout << val << " ";}
    cout << endl;
    // .push_back(n) 在最後面增加一個element
    vec.push_back(5);
    for (int val : vec){cout << val << " ";}
    cout << endl;
    // .pop_back(n) 在最後面刪除一個element
    vec.pop_back();
    for (int val : vec){cout << val << " ";}
    cout << endl;
    // .clear() 清除整個vector
    vec.clear();
    for (int val : vec){cout << val << " ";}
    cout << endl;

    cout << boolalpha;
    cout << vec.empty() << endl;

    cout << vec.size() << endl;

    return 0;
}