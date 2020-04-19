//Analysis examination results
#include <stdio.h>

//function main begins program execution
int main () 
{
  //initialize phase; vars
  unsigned pass = 0, fail = 0, student = 1;
  int result;


  //process phase
  while (student <= 10) {
    //prompt the test result
    printf("%s","Enter the result (pass = 1 or fail = 2)");
    scanf("%d", &result);//read result from user
  
    if (result == 1) {
      pass = pass + 1;//add one to passed students
    }//endif
    else  {
      fail = fail + 1;//add one to failer students
    } //end else

    student = student + 1;
  }//end while
  


  //termination phase; desplay passes and failures
  printf("Passed%u\n", pass);
  printf("Failed %u\n", fail);

  if (pass > 8) {
    puts ("Bouns to instractor!");
  }//end if
  return 0;
}//end main function
