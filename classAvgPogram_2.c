//Program for calculate class average (sentinel-controlled repetition)
#include <stdio.h>

//function main begins program execution
int main ()
{
  unsigned counter = 0;
  int total = 0;
  int grade;
  float average;

  
  printf("%s","Enter grade, -1 to end");//prompt grade
  scanf("%d", &grade);//read grade from user
  while (grade != -1) {
    total = total+ grade;//add grade to total
    counter = counter + 1;//increase counter

    printf("%s","Enter grade, -1 to end");//prompt grade
    scanf("%d", &grade);//read grade from user
  }//end while


  if (counter != 0) {
    average = ( float ) total / counter;//calca the average
    printf("The average is %.2f\n", average);
  }//end if 
  else {
    puts("No grades were entered");
  }//end else
  return 0;
}
