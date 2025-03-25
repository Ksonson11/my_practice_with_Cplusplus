#include <iostream>
using namespace std;

class Costs; 

class Revenue
{
    friend bool profit(Revenue rev,Costs cos);
private:
    int revenue;

public:
    Revenue(int revenue) : revenue(revenue) {}
};

class Costs
{
    friend bool profit(Revenue rev,Costs cos);
private:
    int costs;

public:
    Costs(int costs) : costs(costs) {}
};

bool profit(Revenue rev,Costs cos)
{
    if(rev.revenue > cos.costs) return true;
    else return false;
}

int main()
{
    Revenue rev(1000);
    Costs cos(500);    

    if(profit(rev,cos)) cout << "Profit!" << endl;
    else cout << "No profit!" << endl;

    return 0;
}