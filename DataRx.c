#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "DataRx.h"

void ReadDataFromConsole()
{	

    for(int i = 0; i < NUMBERS_OF_READINGS ; i++)
   { 
        scanf("%f", &Temperature[i]);
   }
}
