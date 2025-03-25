#include <iostream>
using namespace std;

class MyClass
{
    friend void double_x(MyClass &object); // friend function declaration
    // friend function 在哪裡都可以，不受private,public影響
private:
    int x;

    void add(int n)
    {
        x += n;
    }

public:

    MyClass(int x):x(x){};

    void print()
    {
        cout << "x: " << x << endl;
    }
};

void double_x(MyClass &object) // define friend function    
{
    object.x *= 2;
}

int main()
{
    MyClass myobj(7);

    myobj.print();

    double_x(myobj); //利用friend function 去 access private data member
    myobj.print();

    return 0;
}
