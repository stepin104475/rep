#include "util.h"
#include<string.h>
#include<stdio.h>
#include"bit.h"
#include <stdarg.h>
void main()
{
char str1[10]="there";
char str2[10]="youare";
int n = 5, k = 1; 

printf("%d\n",mystrlen(str1));
printf("%s\n",mystrcpy(&str1,&str2));
printf("%s\n",mystrcat(&str1,&str2));
printf("%d\n",mystrcmp(str1,str2));
printf("%d\n",fact(5);
printf("%d\n",prime(6);
printf("%d\n",checkpalindrome(1001);
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
