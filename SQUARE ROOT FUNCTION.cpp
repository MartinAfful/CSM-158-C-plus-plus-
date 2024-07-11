// THIS IS A PROGRAM FOR FINDING THE SQUARE ROOT OF A NUMBER { SQUARE ROOT FUNCTION }
#include<iostream>
#include<cmath>
using namespace std;
double n; // DECLARING n AS A DOUBLE

// FUNCTION FOR FINDING THE SQUARE ROOT OF A NUMBER
double squareroot(double n){
  if (n<0){
    return -1;// IF THE NUMBER IS NEGATIVE, IT WILL RETURN -1
  }else{
    return sqrt(n);// IF THE NUMBER IS POSITIVE, IT WILL RETURN THE SQUARE ROOT OF THE NUMBER
    }
  }
// MAIN FUNCTION
int main(){
  cout<<"Enter a number: ";// ASKING THE USER TO ENTER A NUMBER
  cin>>n;
  if (n>0 || n==0){// IF THE NUMBER IS POSITIVE OR ZERO, IT WILL PRINT THE SQUARE ROOT OF THE NUMBER
    cout<<"The square root of "<<n<<" is "<<sqrt(n);
  }else if (n<0){// IF THE NUMBER IS NEGATIVE, IT WILL PRINT -1
    cout<<"MATH ERROR"<<endl;
  }
  return 0;
}
                                  //ronin cooked this code