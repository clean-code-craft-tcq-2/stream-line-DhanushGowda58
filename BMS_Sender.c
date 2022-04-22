#include <stdio.h>
#include <stdlib.h>
#include "DataTx.h"

int TemperatureData[NUMBERS_OF_READINGS];
int SOCData[NUMBERS_OF_READINGS];

int Temp_SoC_Data()
{
int i;
printf("Temperature Data\n");
for (i = 0; i < NUMBERS_OF_READINGS; i++)
{
printf("%d\n", i);
}
printf("\nSoC Data\n");
for (i = 0; i < NUMBERS_OF_READINGS; i++)
{
	printf("%d\n", i/2);
}
return 0;
}
