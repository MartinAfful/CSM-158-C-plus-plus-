// THIS IS A CODE FOR THE COMBINATION FUNCTION 
#include <iostream>
#include<cmath>
using namespace std;
int n , r, ncr;
// Function to calculate the factorial
int factorial(int x) {
    if (x == 0) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}
int main(){
  
  do{
    cout<<"Enter a value for n: ";// Taking input of n from the user
    cin>>n; // Storing the value of n in the variable n
    cout<<"Enter a value for r: ";// Taking input of r from the user
    cin>>r;// Storing the value of r in the variable r
    ncr = factorial(n)/(factorial(r)*factorial(n-r));
  } while(
    n<0 || r<0 || n<r 
    );
    //THIS IMPLIES THAT THE USER CANNOT ENTER A NEGATIVE NUMBER FOR THE VARIABLES OR THE VALUE OF R CANNOT BE GREATER THAN THE VALUE OF N
  cout<<"nCr = "<<ncr<<endl;
  return 0;// Returning 0 to the main function
}

// RONIN COOKED THIS CODE