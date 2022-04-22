#include "DataTx.h"

int TemperatureData[NUMBERS_OF_READINGS];
int SOCData[NUMBERS_OF_READINGS];

int main()
{
  int TempData;
  for (int i=0;i<50;i++)
  {
    scanf("%d\n",&TempData);
    printf("Temperature data = %d\n", TemperatureData[i]);
  }
}
