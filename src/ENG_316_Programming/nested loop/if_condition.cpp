#include <iostream>
using namespace std;
int main ()
{
int input;
string star = "*";

cout << "Please input the amount of stars you'd like to see in a pyramid shape" << endl;
cin >> input;
for (int x = 0; x < input; x++)
{
	cout << star;
	for (int y=0; y<x; y++)
	{
		cout << star;
	}
	cout << endl;
}
return 0;
}
