#include <stdio.h>
#include <conio.h>

void main()
{

  //	TASK = 1
  // Mr Noman is earning rs 500 per day, he works for 26 days a month
  // out of his whole income of per month, he gives 20% at home grocery,
  // 10% of school fees,15 % self expances  , 30% rent and utilities
  // 5%maintenence, 10% saving and 10% donation for social cause.

  // memory Allocation

  int nomanIncomeDay = 500;
  int nomanIncomePerMonth = 500 * 26;
  // Variable Decleration

  int grocery, schoolFees, selfExpanse, rentAndUtilities, maintenence, saving, donation;

  // calculation

  grocery = nomanIncomePerMonth * 20 / 100;
  schoolFees = nomanIncomePerMonth * 10 / 100;
  selfExpanse = nomanIncomePerMonth * 15 / 100;
  rentAndUtilities = nomanIncomePerMonth * 30 / 100;
  maintenence = nomanIncomePerMonth * 5 / 100;
  saving = nomanIncomePerMonth * 10 / 100;
  donation = nomanIncomePerMonth * 10 / 100;

  // printing process
  // clrscr();
  printf("\n");
  printf("        Noman Monhly Income is : %d \n", nomanIncomePerMonth);
  printf("        20 percent  grocery is : %d \n", grocery);
  printf("        10 percent  schoolFees is : %d \n", schoolFees);
  printf("        15 percent  selfExpanse is : %d \n", selfExpanse);
  printf("        30 percent  rentAndUtilities is : %d \n", rentAndUtilities);
  printf("        5 percent maintenence is : %d \n", maintenence);
  printf("        10 percent  saving is : %d \n", saving);
  printf("        10 percent  donation is : %d \n", donation);

  // printf(grocery + schoolFees + rentAndUtilities + maintenence + saving + donation);
  getch();
}
