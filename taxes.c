#include <stdio.h>
#include <stdlib.h>
int main (int argc ,char **argv) 
{
  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childcredit = 0.0;
  double totaltax = 0.0;
  int numchildren = 0;
  printf("please enter the agi: ");
  scanf("%lf ",&agi);
  getchar();
  printf("do you have nay children y or n");
  c = getchar();
  if (c=='y'||c=='Y')
  {
    printf("how many children do you have?");
    scanf("%d",&numchildren);
  }
  if (agi <= 1990) 
  {
    tax = agi * 0.10;
  }
  else if (agi<=81050)
  {
    tax = 1990 + (tax - 19900)*0.12;
  }
  else if (agi<=172750) 
  {
    tax = 9328 + (agi-81050)*0.22;

  }
  else if (agi<=329850)
  {
    tax = 29502 + (agi - 172750 ) * 0.24;

  }
  else if (agi<=418850)
  {
    tax = 67206 + (agi-329850)*0.32;

  }
  else if (agi<=628300)

  {
    tax = 96585 + (agi - 418850) * 0.35;


  }
  else 
  {
    tax = 168933.50 + (agi - 628300)*0.37;

  }
  childcredit = numchildren * 2000.0;
  if (childcredit > tax )
  {
    childcredit = tax;
  }
printf("agi $%10.2f: \n",agi);
printf("tax $%10.2f: \n",tax);
printf("total tax $%10.2f: \n",totaltax);
printf("child credit:  $%10.2f: \n",childcredit);
return 0;


}