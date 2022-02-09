

#include <stdio.h>
// --------------------------------------------------------------------------------
// AUTHOR: Joshua Wade West
// FILENAME: HW3.cpp
// SPECIFICATION: Calculators payroll via While loop and function call
// FOR: CS 1412 Lab- Section 502


float payroll_calculator();// declares the function payroll_calculator()


int main(void) {
int Total_Pay;// the number that will be inserted from ,

        printf("All employees processed\nTotal payroll is $%8.2f\n",payroll_calculator(Total_Pay));//Calls To Function payroll_Calculator

  return 0;
}

float payroll_calculator(int Fnumber_emp)//Begginning Of SubFunction
{

int count_emp = 1;
int number_emp;//Number Of Employees
double hours; //Number Of Hours Work By Current Employee
double rate;//The $'s per Hour Made By Current Employee
double pay;//The Amount Payed To Current Employee
double total_pay = 0.0;//The Total Amount Payed TO ALL Employees

 printf("How Many Employees Are You Processing?\n");
    
  scanf("%d",&Fnumber_emp);//Input # of Employees For Payroll


while(count_emp<=Fnumber_emp)//Set Up Loop to Input Hours & Rate for Each Employee
    {

printf("Employee #%d\n",count_emp );// Outputs Which Employee Is Activated
printf("Hours  > ");
scanf("%lf", &hours);//Inputs the Hours Worked
printf("Rate   > $");
scanf("%lf", &rate);//Inputs The Amount Paid Per Hour
pay = hours * rate;// Calcualtes Pay
printf("Pay is $%6.2f\n\n", pay);
total_pay=total_pay +pay;// Calculates TOTAL Pay
count_emp+=1;//Moves The Loop Into The Next Employee
    }



    return total_pay;
}