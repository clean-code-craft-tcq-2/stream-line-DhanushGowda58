#include <stdio.h>
#include <stdlib.h>
#include "DataTx.h"

int TemperatureData[NUMBERS_OF_READINGS];
int SOCData[NUMBERS_OF_READINGS];

int main()
{
	int i;
  printf("Temperature Data\n");
	for (i = 0; i < NUMBERS_OF_READINGS; i++)
	{
	   printf("Temperature Data = %d\n", i);
	}
  printf("SoC Data\n");
  for (i = 0; i < NUMBERS_OF_READINGS; i++)
	{
	   printf("State of Charge Data = %d\n", i/2);
	}
return 0;
}
