#include<string.h>
#include<stdio.h>
#include"mystring.h"
#include<stdlib.h>
int main()
{ 
printf("Length of string is %d\n",mystrlen("linux"));
printf("String copied is %s\n",mystrcpy("prog"));
printf("String concatenated is %s\n",concat("bye","bye"));
printf("Result of string comparision is %d\n",mystrcmp("why","linux"));
return 0; 
}