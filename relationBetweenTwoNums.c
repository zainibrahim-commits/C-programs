//Using if statments, reltional operators, and equality operators.
#include <stdio.h>

//Function main begins program excution
int main ()
{
   int num1,num2;//first and second numbers to read from user

   printf("Enter two numbers, and I will tell you the relationships they satisfy:");//prompt

   scanf("%d%d", &num1, &num2);//read two integers

   if (num1 == num2) {
      printf("%d is equal to %d\n",num1, num2);
   }//end if

   if (num1 != num2) {
       printf("%d is not equal to %d\n",num1, num2);
   }//end if

   if (num1 > num2) {
       printf("%d is greater than %d\n",num1, num2);
   }//end if

   if (num1 < num2) {
      printf("%d is smaller than %d\n",num1, num2);
   }//end if

   if (num1 >= num2) {
      printf("%d is greater then or equal to %d\n",num1, num2);
   }//end if

   if (num1 <= num2) {
      printf("%d is smaller than or equal to %d\n",num1, num2);
   }//end if
   
   return 0;
}//end main function















