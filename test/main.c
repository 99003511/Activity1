#include "func.h"
#include<string.h>
#include<stdio.h>
#include"bits.h"
#include <stdarg.h>
void main()
{
char str1[10]="sanvi";
char str2[10]="rao";
int s = 5, k = 1; 

printf("%d\n",mystrlen(str1));
printf("%s\n",mystrcpy(&str1,&str2));
printf("%s\n",mystrcat(&str1,&str2));
printf("%d\n",mystrcmp(str1,str2));
printf("%d\n",fact(5);
printf("%d\n",prime(6);
printf("%d\n",checkpalindrome(1001);
printf("%d\n",addition(3,6,4,5));
printf("%d with %d-th bit Set: %d\n", s, k, setBit(s, k)); 
printf("%d with %d-th bit Cleared: %d\n", s, k, clearBit(s, k)); 
printf("%d with %d-th bit Toggled: %d\n", s, k, toggleBit(s, k));
if(query(s, k))
  printf("Bit number %d is SET in number %d.\n",k,s);
else
  printf("Bit number %d is not SET in number %d.\n",k,s);
return 0; 

}