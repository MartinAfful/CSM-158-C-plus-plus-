// THIS IS A PROGRAM FOR CALCULATING FOR STANDARD DEVIATION
#include<iostream>
#include<cmath>
using namespace std;
float SD=0.0,sum=0.0,mean;//declaring variables as floats
int x,n;//declaring variables as integers
//FUNCTION FOR STANDARD DEVIATION
float StandardDeviation(float data[]){
  for(x=o;x<10;x++){
    sum+=data[x];
  }
  mean=sum/10;//calculating mean
    for (x=0;x<10;x++)
      SD+=pow(data[x]-mean,2);//calculating standard deviation
  return sqrt(SD/10);//returning standard deviation
}
// MAIN FUNCTION
int main(){
float data[10];//array declaration
  cout<<"Enter 10 elements:";
  for(n=0;n<10;n++)//FOR LOOP FOR TAKING INPUT
    cin>>data[n];// TAKING INPUT FROM USER
  cout<<"Standard Deviation:"<<StandardDeviation(data);//calling the function
  return 0;
}
                          //ronin cooked this