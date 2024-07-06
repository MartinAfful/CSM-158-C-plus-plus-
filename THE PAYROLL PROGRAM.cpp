#include <iostream>
using namespace std;
int NoOfEmployees;
int HoursWorked;
int OvertimeHours;
int RegularRate=5;
int NoOfChildren;
int RegularHours = 40;
double GrossPay;
double IncomeTax;
double NHIL;
double EduFund;
double Deductions;
double NetPay;
double OvertimeRate;
double DistrictTax;


int main()
{
cout << "Enter the number of employees:";
  cin >> NoOfEmployees;
cout << "Enter the number of hours  Worked:";
  cin >> HoursWorked;
cout << "Enter the number of children:";
  cin >> NoOfChildren;
  
  OvertimeRate = 1.5 * RegularRate; 
  // Overtime rate is 1.5 times the regular rate 
  OvertimeHours= HoursWorked - RegularHours;
  // Overtime hours is the number of hours worked minus the number of regular hours
if (HoursWorked <= 40){
  GrossPay = HoursWorked * RegularRate;
}else {
  GrossPay = (RegularHours * RegularRate) + (OvertimeHours * OvertimeRate);
}
  
NHIL = 0.025 * GrossPay; // NHIL is 2.5% of the gross pay
IncomeTax = 0.15 * GrossPay; // Income tax is 15% of the gross pay
DistrictTax = 0.01 * GrossPay;// District tax is 1% of the gross pay
  
EduFund = 0.5 * (NoOfChildren-3); // Education fund is 50% of the number of children minus 3
  
if (NoOfChildren > 3)
EduFund = 0.5 * (NoOfChildren-3); 
else EduFund = 0;

  
Deductions = IncomeTax + NHIL + EduFund + DistrictTax;
// Deductions is the sum of the income tax, NHIL, Education fund and District tax
NetPay = GrossPay - (NHIL + IncomeTax + DistrictTax + EduFund);
// Net pay is the gross pay minus the sum of the deductions
 

cout << "\nBELOW IS THE PAYSLIP DETAILS\n"<< endl;

  cout << "The Gross Pay is ¢" <<GrossPay<<endl;
  cout << "The NHIL is ¢" <<NHIL<<endl;
  cout << "The Income Tax is ¢" <<IncomeTax<<endl;
  cout << "The District Tax is ¢" <<DistrictTax<<endl;
  cout << "The Education Fund is ¢"<<EduFund<<endl;
  cout << "The Net Pay is ¢" <<NetPay<<endl;
return 0;   
}
// End of program

// RONIN COOKED THIS.