#include <stdio.h>

//function main begins program execution
int main () {
  unsigned aCounter = 0;//counter of As
  unsigned bCounter = 0;//counter of Bs
  unsigned cCounter = 0;//counter of Cs
  unsigned dCounter = 0;//counter of Ds
  unsigned fCounter = 0;//counter of Fs
  int grade;

  puts( "Enter the letter grades." );
  puts( "Enter the EOF character to end input." );

 //The getchar func reads one char from the keyborad and store it in int var
 while ((grade = getchar()) != EOF)
 {
   switch (grade){
     
     case 'A':
     case 'a':
       ++aCounter;
       break;

     case 'B':
     case 'b':
       ++bCounter;
       break;

     case 'C':
     case 'c':
       ++cCounter;
       break;

     case 'D':
     case 'd':
       ++dCounter;
       break;

     case 'F':
     case 'f':
       ++fCounter;
       break;
 
     case '\n':
     case '\t':
     case ' ' :
       break;

     default:
       printf("%s", "Enter valid grade.");
       puts("Enter a new grade.");
       
   }//end switch
     
 }//end while

 // output summary of results
 puts( "\nTotals for each letter grade are:" );
 printf( "A: %u\n", aCounter ); // display number 
 printf( "B: %u\n", bCounter ); // display number 
 printf( "C: %u\n", cCounter ); // display number 
 printf( "D: %u\n", dCounter ); // display number 
 printf( "F: %u\n", fCounter ); // display number

  return 0;
}//end main
