#include <stdio.h>
#include "DataTx.h"

int TemperatureData[NUMBERS_OF_READINGS];
int SOCData[NUMBERS_OF_READINGS];

int main()
{
  int TempData;
  char string [256];
  printf ("Insert your full address: ");
  fgets (string);
  printf ("Your address is: %s\n",string);
  for (int i=0;i<50;i++)
  {
    scanf("%d\n",&TempData);
    printf("Temperature data = %d, Temperature data read = %d\n", TemperatureData[i],TempData);
  }
    return 0;
}
