//Preincrementing And Postincrementing
#include <stdio.h>

//function main begins program execution
int main () 
{
  int c = 5;//define and init variable

  //demonstrate postincrement
  printf("%d\n", c);//print 5
  printf("%d\n", c++);//print 5 then postincrement
  printf("%d\n\n", c);//print 6

  c = 5;
  //demonstrate preincrement
  printf("%d\n", c);//print 5
  printf("%d\n", ++c);//preincrement print 6
  printf("%d\n", c);//print 6

  return 0;
}//end main
