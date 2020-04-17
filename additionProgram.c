//Addition Program.
#include<stdio.h>

//Function Main Begins Program Excution
int main ()
{
  
   int integer1, integer2, sum;//first num and second num and the variable in which the sum will be stored

   printf ("Enter the first number\n");//prompt
   scanf ("%d", &integer1);//read an number

   printf ("Enter the second number\n");//prompt
   scanf ("%d", &integer2);//read an number

   sum = integer1 + integer2;//assign total to sum
   
   printf ("The sum is %d\n\a", sum);//print sum


   return 0 ;
} //end function main
