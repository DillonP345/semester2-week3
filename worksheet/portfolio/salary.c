
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Dillon Phillips
 * ID: 201984193
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float Salary = 36500;
   float NI = 0.08;
   float Tax = 0.15 ;
   float NI_contribution;
   float Tax_contribution;
   float Take_home;
    // calculate the deductions and final take-home salary
   NI_contribution = Salary * NI;
   Salary = Salary - NI_contribution;

   if (Salary>12500)
   {
      Salary = Salary - 12500;
      Tax_contribution = Salary * Tax;
      Salary = Salary - Tax_contribution;
   }
   Take_home = Salary + 12500;


    // Use only these print statement with appropriate formatting and variable names
    printf("%.2f Salary £\n",Salary);
    printf("%.2f NI contribution £\n",NI_contribution);
    printf("%.2f Tax contribution £\n",Tax_contribution);
    printf("%.2f Take home salary £\n",Take_home);

    return 0;
 }