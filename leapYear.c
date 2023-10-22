#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int isleapyear (int year);
int main (argc, char **argv)
{
  bool reportpass = false;
  if (argc>1 && strcmp(argv[1],"-reportpass")==0)
  {
    reportpass = true;

  }
  int numpassed = 0;
  int numfailed = 0;
  int year;
  year = 2000;
  printf("test case 1: year = %d:",year);
  if(!isleapyear(year))
  {
    
  }



}
