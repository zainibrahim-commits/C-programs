//Class average program
#include <stdio.h>

//function main begins program execution
int main ()
{
  unsigned counter = 1;//define & init counter variable
  int total = 0;//define & init var to put the total grades 
  int average;//average of grades
  int grade;//grade to enter by user

  //processing phase
  while (counter <= 10) {
    printf("%s","Enter the grade %d:");//prompt input
    
    scanf("%d", &grade);//scan the grade from the user
    total = total + grade;//add the grades to total

    counter = counter + 1;//increase counter
  }//end while

  average = total / 10;//calculate the avg

  printf("The average is %d\n", average);//print the result

  return 0 ; 
}
