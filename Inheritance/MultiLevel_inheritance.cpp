#include <iostream>
using namespace std;

// base class (parent)
class MyClass
{
    public:
        void myFunction()
        {
            cout << "Here is the content in base class" << endl;
        }
};
// derived class (child)
class MyChild : public MyClass
{
};
// derived class (grandchild)
class MyGrandChild : public MyChild
{
};

int main()
{   
// MyChild 繼承 MyClass
    cout << "MyChild:" << endl;
    MyChild child; 
    child.myFunction();

// MyGrandchild 繼承 MyChild
    cout << "MygrandChild" << endl;
    MyGrandChild grandchild;
    grandchild.myFunction();

    return 0;
}
