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
  year = 2100;
  printf("test case 3: year = %d: ", year);
  if (isleapyear(year)) {
    printf("FAILED\n");
    numfailed = numfailed + 1;
  } else {
    printf("PASSED\n");
    numpassed = numpassed + 1;
  }

  year = 2004;
  printf("test case 4: year = %d: ", year);
  if (!isleapyear(year)) {
    printf("FAILED\n");
    numfailed = numfailed + 1;
  } else {
    printf("PASSED\n");
    numpassed = numpassed + 1;
  }

  year = 2001;
  printf("Test Case 5: year = %d: ", year);
  if (isleapyear(year)) {
    printf("FAILED\n");
    numfailed = numfailed + 1;
  } else {
    printf("PASSED\n");
    numpassed = numpassed + 1;
  }

  year = 2003;
  printf("Test Case 6: year = %d: ", year);
  if (isleapyear(year)) {
    printf("FAILED\n");
    numfailed = numfailed + 1;
  } else {
    printf("PASSED\n");
    numpassed = numpassed + 1;
  }

  printf("\n\n");
  printf("Summary:\n");
  printf("Number of test cases passed: %d\n", numpassed);
  printf("Number of test cases failed: %d\n", numfailed);
  printf("Percentage Passed: %.2f%%\n", (double)numpassed / (numpassed + numfailed) * 100);

  if (reportpass) {
    return numpassed;
  } else {
    return numfailed;
  }
}

int isleapyear(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}

  
