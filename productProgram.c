//Calculate the product of three numbers
#include <stdio.h>
//function main begins 
int main () 
{
  int x, y, z, total;//Defining variabls

  printf("%s", "Enter three numbers:");//prompt
  scanf("%d%d%d", &x, &y, &z);//read numbers;

  total = x * y * z;//assign the product to total

  printf("The product is:%d\n", total);//print statement
  
   return 0 ;
}//end main
