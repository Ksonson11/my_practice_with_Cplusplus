#include<iostream>
#include<string>
using namespace std;

int main()
{
	int value;
	cout << "Enter a mumber: ";
	cin >> value;
	cin.ignore(1000, '\n');
	for (int i = 0; i < value; i++)
	{
		string s;
		getline(cin, s);
		cout << "[output] string " << i+1 << ": \"" << s + "\""<< endl;
	}
}