#include "DataTx.h"

int TemperatureData[NUMBERS_OF_READINGS];
int SOCData[NUMBERS_OF_READINGS];

void main()
{
  float TempData;
  for (i=0;i<50;i++)
  {
    scanf("%f\n",&TempData);
    printf("Temperature data = %d", TemperatureData[i]);
  }
}
