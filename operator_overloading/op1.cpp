#include <iostream>
using namespace std;

class Number
{
public:
    int n;
    Number(int set_n) : n(set_n){};

    Number operator+(const Number &numA)
    {
        cout << "this->n: " << this -> n << endl;
        cout << "numA.n: " << numA.n << endl;
        return Number(this->n + numA.n);
    } 
};

int main()
{   
    // 第一組 a,b,c
    Number a(5),b(10);
    Number c = a + b;
    cout << "c.n: " << c.n << endl << endl;
    // 第二組 d,e,f
    Number d(20),e(55);
    Number f = d + e;
    cout << "f.n: " << f.n << endl << endl;
    // 第三組 綜合
    Number g = c + f;
    cout << "g.n: " << g.n << endl << endl;

    return 0;
}