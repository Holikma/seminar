#include <stdio.h>
int main()
{
   short int i = 1;
   short int*c = &i;
   if (*c != 0)   
       printf("Little endian");
   else
       printf("Big endian");
   return 0;
}