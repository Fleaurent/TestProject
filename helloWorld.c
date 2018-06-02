#include <stdio.h>
#include <func.h>

int main(void)
{
  int c;
  
  c = sum(1,2);
  printf("Hello World: %d", c);
  
  d = mult(1,2);
  printf("Hello World: %d", d);
  
  return 0;
}
