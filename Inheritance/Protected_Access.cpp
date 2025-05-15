#include <iostream>
using namespace std;

class Employee
{
    protected:
        double salary;
};

class Programmer : protected Employee // protected 可以讓derived class 繼承
{
    public:
        double bonus;
        void setSalary(double s)
        {
            salary = s;
        }
        double getSalary() const
        {
            return salary;
        }
        double getTotal() const
        {
            return salary + bonus;
        }
};

int main()
{
    Programmer prog1;
    prog1.setSalary(70000);
    prog1.bonus = 30000;
    cout << "Salary: " << prog1.getSalary() << endl;
    cout << "Bonus: " << prog1.bonus << endl;
    cout << "Total: " << prog1.getTotal() << endl;

    return 0;
}