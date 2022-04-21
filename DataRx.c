#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "ReceiveBatteryParameters.h"

void ReadDataFromConsole(BatteryChargingParameters *batteryParameters)
{	
    char ReadString[400];
    for(int i = 0; i < STREAM_SIZE ; i++)
   {  
	//scanf("%50s", ReadString);
	if(scanf("%50s", ReadString) == EOF) 
        {
            break;
        }
        scanf("%f", &(batteryParameters->temperature));
        scanf("%50s", ReadString); //deg
        scanf("%50s", ReadString); //C
        scanf("%50s", ReadString); //,
        scanf("%50s", ReadString); // State
        scanf("%50s", ReadString); //of
        scanf("%50s", ReadString); //charge:
        scanf("%f", &(batteryParameters->stateOfCharge));
	//printf("%.3f \t %.3f\n",batteryParameters->temperature,batteryParameters->stateOfCharge);
	batteryParameters++;
   }
}

BatteryChargingParameters ComputeMinBMSParameter(BatteryChargingParameters *batteryParameters)
{
    BatteryChargingParameters MinValues={batteryParameters->temperature,batteryParameters->stateOfCharge};
    for(int i = 0; i < STREAM_SIZE; i++){
        if(batteryParameters->temperature < MinValues.temperature)
	{
            MinValues.temperature=batteryParameters->temperature;
        }
	if(batteryParameters->stateOfCharge < MinValues.stateOfCharge)
	{
            MinValues.stateOfCharge=batteryParameters->stateOfCharge;
        }
	batteryParameters++;    
    }
	return MinValues;
}

BatteryChargingParameters ComputeMaxBMSParameter(BatteryChargingParameters *batteryParameters)
{
    BatteryChargingParameters MaxValues={batteryParameters->temperature,batteryParameters->stateOfCharge};
    for(int i = 0; i < STREAM_SIZE; i++){
        if(batteryParameters->temperature > MaxValues.temperature)
	{
            MaxValues.temperature=batteryParameters->temperature;
        }
	if(batteryParameters->stateOfCharge > MaxValues.stateOfCharge)
	{
            MaxValues.stateOfCharge=batteryParameters->stateOfCharge;
        }
	batteryParameters++;    
    }
	return MaxValues;
}

BatteryChargingParameters ComputeAvgBMSParameter(BatteryChargingParameters *batteryParameters)
{
    BatteryChargingParameters AvgValues={0};
    BatteryChargingParameters Sum={0};
    for(int i = 0; i < STREAM_SIZE; i++)
    {
        Sum.temperature= Sum.temperature + batteryParameters->temperature;
	Sum.stateOfCharge= Sum.stateOfCharge + batteryParameters->stateOfCharge;
	batteryParameters++;    
    }
    AvgValues.temperature = Sum.temperature/ STREAM_SIZE;
    AvgValues.stateOfCharge = Sum.stateOfCharge/ STREAM_SIZE;
    return AvgValues;
}

void batteryParametersReceiver(BatteryChargingParameters *batteryParameters)
{
    ReadDataFromConsole(batteryParameters);
    BatteryChargingParameters MinValue,MaxValue,AvgValue;
    MinValue = ComputeMinBMSParameter(batteryParameters);
    MaxValue = ComputeMaxBMSParameter(batteryParameters);
    AvgValue = ComputeAvgBMSParameter(batteryParameters);
}
