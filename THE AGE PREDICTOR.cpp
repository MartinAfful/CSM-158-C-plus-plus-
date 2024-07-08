#include <iostream>
#include <cmath>
using namespace std;
int day, month, year;
int futureyear, futureyearAge;
string position;
string name;

int main(){

  cout << "Enter your name: ";
     cin>>name;
  cout <<"\nHello "<<name<<" I am HOUDINI the Age Predictor Program. ";
  cout<<"I will predict your age based on your birthday.\n";
  cout<< "NOOOOOOOOOW!,For my trick to work, I will take three things from you.Provide them so that I can proceed with the trick .\n";
       string monthname;
  cout<<"\nEnter your day of birth(1-31):";
     cin>>day;
  cout<<"Enter your month of birth(1-12):";
     cin>>month;
  cout<<"Enter your year of birth:";
     cin>>year;
  if(day%10==1 && day!=11){
    position = "st";
  }else if(day%10==2 && day!=12){
    position = "nd";
  }else if(day%10==3 && day!=13){
    position = "rd";
  }else{
       position = "th";  
  }
    

  //PHASE ONE 
  if(day<=31 && day>0 && month <12){
         switch(month){
             case 1:
                    monthname= "January";
                    break;
             case 2:
                    monthname= "February";
                    break;
             case 3:
                    monthname= "March";
                    break;
             case 4:
                    monthname="April";
                    break;
             case 5:
                    monthname="May";
                    break;
             case 6:
                    monthname="June";
                    break;
             case 7:
                    monthname="July";
                    break;
             case 8:
                      monthname="August";
                    break;
             case 9:
                     monthname="September";
                    break;
             case 10:
                      monthname="October";
                    break;
             case 11:
                      monthname="November";
                    break;
             case 12:
                      monthname="December";
                    break;
             default:
                    cout<<"Come on, you got to be born in one of these months.";
                    break;
       }
       cout<<name<<",you were born on the "<<day<<position<<" of "<<monthname<<","<<year<<"."<<endl;
      }else{   
        cout<<"\nI AM SORRY "<<name<<" I DON'T THINK I CAN EXECUTE MAGIC TRICK,THANKS FOR PARTICIPATING ANYWAYS."<<endl; 
       }

  // PHASE TWO
       
      cout<<"\nGREAT JOB!,"<<name<<" NOW FOR MY LAST AND FINAL TRICK.I WILL ASK YOU FOR A FUTURE YEAR AND I WILL TELL YOU YOUR AGE AS OF THAT YEAR.\n";
      cout<<"Enter a future year:";
      cin>>futureyear;
      futureyearAge = futureyear - year;
      if (futureyear<year){
          cout<<"CHILL "<<name<<"I DON'T THINK YOU EVEN EXIST BY THEN"<<endl;
      }else{
        cout<<"YOU WILL BE "<<futureyearAge<<" IN THE YEAR "<<futureyear<<endl;
      }
      cout<<"\nTHANK YOU FOR PARTICIPATING IN MY PROGRAM.GOODBYE "<<name<<endl;
    return 0;        
}

