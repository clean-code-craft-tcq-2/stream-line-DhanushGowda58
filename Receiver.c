#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//#include "ReceiveBatteryParameters.h"
float Temp[50] = {};
float Soc[50] = {};
void ReadDataFromConsole()
{	
        for (int i = 0; i < 50; i++)
	{
		//scanf("%f\t%f\n", &Temp[i], &Soc[i]);
		printf("%f\t%f\n", Temp[i], Soc[i]);
	}
}

int main()
{
	ReadDataFromConsole();
}

