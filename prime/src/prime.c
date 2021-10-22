#include "prime.h"

void prime(int n)
{
  
  int i, flag = 0;

  for (i = 2; i <= n-1; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 is Neither Prime nor Composite");
  } 
  else {
    if (flag == 0)
      printf("%d is a Prime Number.", n);
    else
      printf("%d is not a Prime Number.", n);
        }
  }
