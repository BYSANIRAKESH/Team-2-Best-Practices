#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include"sum.h"


void addition();

int main()
{
  test_main();
  return 0;
}
    
void addition() 
{
    int c=10,d=43;
    
    int total=sum(c,d);
    printf("Value = %d",total);
}
