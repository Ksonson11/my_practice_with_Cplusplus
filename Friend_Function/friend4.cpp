#include <iostream>
using namespace std;

class Costs; 

class Revenue
{
private:
    int revenue;

public:
    Revenue(int revenue) : revenue(revenue) {}
    bool profit(Costs cos);
};

class Costs
{
    friend bool Revenue :: profit(Costs cos);
private:
    int costs;

public:
    Costs(int costs) : costs(costs) {}
};

bool Revenue :: profit(Costs cos)
{
    if(revenue > cos.costs) return true;
    else return false;
}

int main()
{
    Revenue rev(500);
    Costs cos(1000);

    if(rev.profit(cos)) cout << "Profit!" << endl;
    else cout << "No profit!" << endl;

    return 0;
}