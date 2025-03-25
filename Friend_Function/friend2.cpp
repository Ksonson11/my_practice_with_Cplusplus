#include <iostream>
using namespace std;

class MyClass
{
    friend void double_x(MyClass &object);
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

void double_x(MyClass &object)   
{
    int current_x_value = object.x;
    object.add(current_x_value);
}

int main()
{
    MyClass myobj(7);

    myobj.print();

    double_x(myobj); 
    myobj.print();

    return 0;
}
