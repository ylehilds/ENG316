#include <iostream>
using namespace std;
int main ()
{ 
string answer;
cout << "What is the capital of Idaho?";
cin >> answer; 
if (answer == "boise" || answer=="Boise" || answer == "BOISE") 
{
	cout << "correct";
}
else 
{
	cout << "That is incorrect, the correct answer is Boise";
}
return 0;

}
