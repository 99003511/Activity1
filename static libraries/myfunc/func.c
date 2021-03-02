#include <stdarg.h>
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}

int fact(int n)
{
    int i,fact=1;
  
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int checkpalindrome(int num)
{
    int temp, remainder, sum = 0;
    temp = num;
    while(num!=0)
    {
        remainder = num % 10;
        sum = sum*10 + remainder;
        num/=10;
    }
    if(sum==temp)
        return 1;
    else
        return 0;
}

int add(int number, ...) 
{ 
    va_list valist; 
  
    int sum = 0, i; 
  
    va_start(valist, number); 
    for (i = 0; i < number; i++)  
        sum += va_arg(valist, int); 
  
    va_end(valist); 
  
    return sum; 
} 
