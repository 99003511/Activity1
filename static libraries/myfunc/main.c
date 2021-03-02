#include "func.h"
#include<stdio.h>
#include <stdarg.h>
int main()
{
printf("Factorial of 3 is %d\n",fact(3));
printf("Is 8 prime or not %d\n",prime(8));
printf("Is 353 a palindrome %d\n",checkpalindrome(353));
printf("The sum of 3 arguments[7,4,9] %d\n",addition(7,4,9));
return 0; 

}