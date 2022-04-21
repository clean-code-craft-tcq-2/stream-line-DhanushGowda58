#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "DataRx.h"

int main()
{	
float Temperature[NUMBERS_OF_READINGS] = {};
    for(int i = 0; i < NUMBERS_OF_READINGS ; i++)
   { 
        scanf("%f", &Temperature[i]);
   }
    return 0;
}
