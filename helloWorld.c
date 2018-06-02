#include <stdio.h>
#include <func.h>

int main(void)
{
  int c;
  
  c = sum(1,2);
  printf("Summe: %d", c);
  
  d = mult(1,2);
  printf("Multipikation: %d", d);
  
  return 0;
}
