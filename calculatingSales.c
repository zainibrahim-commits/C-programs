//An online retailer sells five different products
#include <stdio.h>

//main function begins program execution
int main () {

  unsigned product, quantity;
  double total = 0;

  puts("Enter pairs of item numbers and quantities or Enter -1 for the item number to end input.");
  
  while ( product != -1)
  {
    scanf("%u%u", &product, &quantity);
    
    switch (product)
    {
      case 1:
        total += (quantity * 2.98);
        break;
  
      case 2:
        total += (quantity * 4.50);
        break;

      case 3:
        total += (quantity * 9.98);
        break;

      case 4:
        total += (quantity * 4.49);
        break;

      case 5:
        total += (quantity * 6.87);
        break;

      case -1:
        break;

      default:
        printf("Invalid product code: %u\nQuantity: %u\n", product, quantity);
        break;
    }//end switch
 
  }//end while

  printf("The total retail value was: %.2lf\n", total);
  return 0;

}
