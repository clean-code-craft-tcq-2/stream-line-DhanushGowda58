#include <stdio.h>
#include <stdlib.h>
#include "DataTx.h"

int TemperatureData[NUMBERS_OF_READINGS];
int SOCData[NUMBERS_OF_READINGS];

int main()
{
char line[256];

scanf("%255[^\n]%*c",line); // %*c to remove trailing \n
fgets(line, 256, stdin);
printf("%c\n", line);
    
}
