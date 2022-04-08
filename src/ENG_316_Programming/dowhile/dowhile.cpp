#include <iostream>
using namespace std;
int main ()
{
bool key = false;
string number;
do 
{
cout << "input a number between 0-9 and I will spell out the number. (input 10 to end)" << endl ;
cin >> number;
if (number == "1") {cout << "One" <<endl;}
if (number == "2") {cout << "Two" <<endl;}
if (number == "3") {cout << "Three" <<endl;}
if (number == "4") {cout << "Four" <<endl;}
if (number == "5") {cout << "Five" <<endl;}
if (number == "6") {cout << "Six" <<endl;}
if (number == "7") {cout << "Seven" <<endl;}
if (number == "8") {cout << "Eight" <<endl;}
if (number == "9") {cout << "Nine" <<endl;}
if (number == "0") {cout << "Zero" <<endl;}
if (number == "10") {
key = true;
cout << "Thanks for your time";
break;}
if (number != "1" && number != "2" && number != "3" && number != "4" && number != "5" && number != "6" && number != "7" && number != "8" && number != "9" && number != "0")
{
	cout << "Wrong input" << endl;
}
} while (key == false);

return 0;
}

