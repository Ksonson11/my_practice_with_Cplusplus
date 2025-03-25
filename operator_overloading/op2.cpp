#include <iostream>
using namespace std;

class Number
{
public:
    int n;
    Number(int set_n) : n(set_n){};

    Number operator+(const Number &numA)
    {
        return Number(this->n + numA.n);
    } 

    bool operator==(const Number &numA)
    {
        if (this->n == numA.n) return true;
        else return false;
    }
};

int main()
{   
    Number a(5),b(10);
    Number c = a + b;

    if(a == c) cout << "a == c" << endl;
    else cout << "a != c" << endl;
    Number d(15);
    if(d == c) cout << "d == c" << endl;
    else cout << "d != c" << endl;

    return 0;
}