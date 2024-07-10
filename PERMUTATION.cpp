// THIS IS A CODE FOR THE PERMUTATION FUNCTION 
#include <iostream>
#include<cmath>
using namespace std;
int n , r, nPr;
// Function to calculate the factorial
int factorial(int x) {
    if (x == 1) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}
int main(){
    cout<<"Enter the value of n: ";
        cin>>n;
      cout<<"Enter the value of r: ";
        cin>>r; 
if(n>r && r>0 && n>0){
        nPr = factorial(n) /  factorial(n - r);
cout<<"nPr = "<<nPr<<endl;
cout << "Therefore the value of nPr is: " << nPr << endl;
}else{
    cout<<"\n# Note that the value of n should be greater than r and both should be positive."<<endl;
cout<<"\n MATH ERROR "<<endl;
 
} 
  return 0;// Returning 0 to the main function
}

// RONIN COOKED THIS CODE