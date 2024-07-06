#include <iostream>
#include <cmath>
using namespace std;

string operation;
double number1,number2;


int main()
{
cout<< "Enter the first number: ";
  cin>> number1;
cout<< "Choose an operation(/,*,+,-,): ";
  cin>> operation;
cout<< "Enter the second number: ";
  cin>> number2;
if (operation == "+")
{
  cout<< number1 + number2;
}
else if (operation == "-")
{
  cout<< number1 - number2;
}
else if (operation == "*")
{ 
  cout<< number1 * number2;
}
else if (operation == "/")
{
  cout<< number1 / number2;
}
  
else cout << "Invalid operation";


return 0;
}

// RONIN COOKED THIS.