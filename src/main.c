#include "util.h"
#include<string.h>
#include<stdio.h>
#include"bit.h"
#include <stdarg.h>
#include"string1.h"
int main()
{
int n = 5, k = 1; 

printf("%d\n",mystrlen("linux"));
printf("%s\n",mystrcpy("program"));
printf("%s\n",concat("hi","bye"));
printf("%d\n",mystrcmp("what","linux"));
printf("%d\n",fact(5));
printf("%d\n",prime(6));
printf("%d\n",checkpalindrome(1001));
printf("%d\n",addition(3,6,4,5));
printf("%d with %d-th bit Set: %d\n", n, k, setBit(n, k)); 
printf("%d with %d-th bit Cleared: %d\n", n, k, clearBit(n, k)); 
printf("%d with %d-th bit Toggled: %d\n", n, k, toggleBit(n, k));
if(query(n, k))
  printf("Bit number %d is SET in number %d.\n",k,n);
else
  printf("Bit number %d is not SET in number %d.\n",k,n);
return 0; 

}
