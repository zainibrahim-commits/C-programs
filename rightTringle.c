//printing right tringle in deferent ways
#include <stdio.h>

int main () {
  
  unsigned i, j;//define counters
  unsigned row;//define variable to read num of rows

  puts("Enter the number of rows");
  scanf("%u", &row);

  //printing right tringle
  for (i = 1; i <= row; ++i)
  {
    for (j = 1; j <= i; ++j)
    {
      printf("%s", "*");
    }

   puts("");//print new line  
  }

  puts("");//print blank line between tringles

  //printing reversed right tringle
  for (i = 1; i <= row; ++i)
  {
    for (j = i; j <= row; ++j)
    {
      printf("%s", "*");
    }

    puts("");//print new line
  }

  puts("");//print blank line between tringles

  //printing reversed mirrored right tringle
  for (i = 1; i <= row; ++i)
  {
    //print blank spaces
    for (j = 1; j < i; ++j)
    {
      printf(" ");
    }
    //print stars
    for (j = i; j <= row; ++j)
    {
      printf("%s", "*");
    }

    puts("");//print new line
  }

  puts("");//print blank line between tringles

  //printing mirrores right tringle;
  for (i = 1; i <= row; ++i)
  {
    //print blank spaces
    for (j = 1; j < row; ++j)
    {
      printf(" ");
    }
    //print stars
    for (j = 1; j <= i; ++j)
    {
      printf("%s", "*");
    }
  
    puts("");//print new line
  }
  return 0;
}
