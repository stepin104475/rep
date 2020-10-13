#include<string.h>
const char *concat(char* s1, char* s2)
 {
     char *ns =malloc(strlen(s1)+strlen(s2)+1);
     ns[0]='\0';
     strcat(ns,s1);
     strcat(ns,s2);
     return ns;
 }
int mystrlen(char* s1)
{
    int l;
    l=strlen(s1);
     return l;
     //printf("%d\n",l);
}
char *mystrcpy(char* s1)
{
    char *ns =malloc(strlen(s1)+1);
    strcpy(ns,s1);
    return ns;

}
 int *mystrcmp(char* s1,char* s2)
 {
     int b;
   b=strcmp(s1,s2);
   if(b==0)
     {
      return 1;
     }
     else
     {
      return 0;
     }

 }

