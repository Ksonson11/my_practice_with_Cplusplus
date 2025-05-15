#include <iostream>
using namespace std;

class baseAnimal
{
    public:
        baseAnimal() { cout << "Base call" << endl; }
        void name() { cout << "I am animal." << endl; }
};

class derivedDog : public baseAnimal
{
    public:
        derivedDog() { cout << "I am dog." << endl; }
        void bark() { cout << "wol wol wol" << endl << endl; }
};
class derivedCat : public baseAnimal
{
    public:
        derivedCat() { cout << "I am cat." << endl; }
        void meow() { cout << "meow meow meow" << endl << endl; }
};

int main()
{
    derivedDog dog;
    dog.name(); // dog 可以使用 base class 中的 member function
    dog.bark();
    derivedCat cat;
    cat.name(); // cat 可以使用 base class 中的 member function
    cat.meow();
    return 0;
}