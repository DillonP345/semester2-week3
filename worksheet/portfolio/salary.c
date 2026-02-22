
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Dillon Phillips
 * ID: 201984193
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float Salary = 36250;
   float NI = 0.08;
   float Tax = 0.15 ;
   float Salary_remaining;
   float NI_contribution;
   float Tax_contribution;
   float Take_home;
    // calculate the deductions and final take-home salary
   NI_contribution = Salary * NI;
   Salary_remaining = Salary - NI_contribution;

   if (Salary_remaining>12500)
   {
      Tax_contribution = (Salary_remaining - 12500) * Tax;
   }
   else
   {
      Tax_contribution = 0;
   }
   Take_home = Salary_remaining - Tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
   printf("£%.2f Salary\n", Salary);
   printf("£%.2f NI contribution\n", NI_contribution);
   printf("£%.2f Tax contribution\n", Tax_contribution);
   printf("£%.2f Take home salary\n", Take_home);

    return 0;
 }