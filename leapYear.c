#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int isleapyear(int year);

int main(int argc, char **argv) {
  bool reportpass = false;

  if (argc > 1 && strcmp(argv[1], "-reportpass") == 0) {
    reportpass = true;
  }

  int numpassed = 0;
  int numfailed = 0;
  int year;

  year = 2000;
  printf("test case 1: year = %d: ", year);
  if (!isleapyear(year)) {
    printf("FAILED\n");
    numfailed = numfailed + 1;
  } else {
    printf("PASSED\n");
    numpassed = numpassed + 1;
  }

  year = 2001;
  printf("test case 2: year = %d: ", year);
  if (isleapyear(year)) {
    printf("FAILED\n");
    numfailed = numfailed + 1;
  } else {
    printf("PASSED\n");
    numpassed = numpassed + 1;
  }

  
