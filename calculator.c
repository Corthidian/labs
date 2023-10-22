#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () 
{
  double a,b,result;
  int choice;
  printf("Enter operand a: ");
  scanf("%lf",&a);
  printf("Enter operand b: ");
  scanf("%lf",&b);
  printf("Enter operation\n(1)Addition\n(2)Subtraction(3)Multiplication\n(4)Division\n(5)Minimum\n(6)Logarithm");
  scanf("%d",&choice);
  if (choice == 1)
  {
    result = a+b;
    printf("result: %f",result);
  }
  else if (choice == 2)
  {
    result = a-b;
    printf("result: %f",result);
  }
  else if (choice == 3) 
  {
    result = a*b;
    printf("result: %f",result);

  }
  else if (choice == 4) 
{
  if (b!=0) 
  {
    result = a/b;
    printf("result: %f",result);
  }
  else 
  {
    printf("Result: Division by zero is not allowed.\n");
  }
}
else if (choice == 5) 
{
  result = (a<b) ? a:b;
  printf("result: %f\n",result);

}
else if (choice == 6) 
{
  if (a>0 && b>0 )
  {
    result = log(b)/log(a);
    printf("result: %f",result);
  }
  else 
  {
    printf("both operands must be positive");
  }
}
return 0;





 
}
