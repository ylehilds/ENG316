 #include<iostream>
using namespace std;
double exchange(double x)
{
x = x *1.62651;
return x; 
}
int main ()
{
double money1;
cout << "Currency conversion from US dollars to Reais (Brazilian Currency)" << endl;
cout << "Please type the money in dollars:";
cin >> money1;
cout << endl << money1 << " dollar(s) in Reais is: "<<exchange (money1) << " Reais" <<endl;
cout << "Thank you for using Lehi's Currency Conversion";
return 0;
}
