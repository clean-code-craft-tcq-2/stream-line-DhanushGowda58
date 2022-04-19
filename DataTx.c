#include "BMS_sender.h"

int TemperatureData[NUMBERS_OF_READINGS];
int SOCData[NUMBERS_OF_READINGS];

void printToConsole(int batteryData[])
{
	int i;
	for (i = 0; i < NUMBERS_OF_READINGS; i++)
	{
	   printf("%d\n", batteryData[i]);
	}
}


bool readDataFromFile(FILE* filePtr, int sensorData[])
{
    if (NULL == filePtr)
    {
	printf("file cannot be opened \n");
	return false;
    }

    int i;
    for (i = 0; fscanf(filePtr, "%d", &sensorData[i]) != EOF; i++)
    {
    	//do nothing
    }

    fclose(filePtr);
    printToConsole(sensorData);
    return true;
}


bool BMS_DataSender()
{
	bool retVal1, retVal2;
	FILE* fptr;
	fptr = fopen("temparatue_sensor.txt","r");
	printf("Temperature Sensor Data\n");
	retVal1 = readDataFromFile(fptr, TemperatureData);

	printf("\nSOC Sensor Data\n");
	fptr = fopen("soc_sensor.txt","r");
	retVal2 = readDataFromFile(fptr, SOCData);

	if(retVal1 && retVal2)
		return true;
	else
		return false;
}
