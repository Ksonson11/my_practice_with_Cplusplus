#include <iostream>
using namespace std;

  // Base class
class MyClass {
    public:
        void myFunction()
        {
            cout << "Some content in parent class." << endl;
        }
  };
  
  // Another base class
class MyOtherClass
{
    public:
        void myOtherFunction()
        {
            cout << "Some content in another class." << endl;
        }
};
  
  // Derived class
class MyChildClass: public MyClass, public MyOtherClass // A class can also be derived from more than one base class.
{
};
  
int main()
{
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();

    return 0;
}