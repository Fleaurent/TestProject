#include <stdio.h>
#include <func.h>

int main(void)
{
  int c, d, i;
  
  for(i=0;i<10;i++)
  {
   printf("%d\t",i); 
  }
  
  printf("Hello World:\n");
  
  c = sum(1,2);
  printf("Summe: %d", c);
  
  d = mult(1,2);
  printf("Multipikation: %d", d);
  
  
  
  return 0;
}
