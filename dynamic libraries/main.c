#include<stdio.h>
#include"bits.h"
int main()
{
int s = 6, k = 3; 
printf("%d with %d-th bit Set: %d\n", s, k, setBit(s, k)); 
printf("%d with %d-th bit Cleared: %d\n", s, k, clrBit(s, k)); 
printf("%d with %d-th bit Toggled: %d\n", s, k, toggleBit(s, k));
if(query(s, k))
  printf("Bit number %d is SET in number %d.\n",k,s);
else
  printf("Bit number %d is not SET in number %d.\n",k,s);
return 0; 

}