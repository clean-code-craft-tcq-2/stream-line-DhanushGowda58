#include <stdio.h>
#include "DataTx.h"

int TemperatureData[NUMBERS_OF_READINGS];
int SOCData[NUMBERS_OF_READINGS];

int main()
{
  int TempData;
char message[N];        /* character array for the message, you can always change the character length */
int i = 0;          /* loop counter */

printf( "Enter a message: " );
message[i] = getchar();    /* get the first character */
while( message[i] != '\n' ){
    message[++i] = getchar(); /* gets the next character */
}

printf( "Entered message is:" );
for( i = 0; i < N; i++ )
    printf( "%c", message[i] );
  
  printf("%c\n",line);
  for (int i=0;i<50;i++)
  {
    scanf("%d\n",&TempData);
    printf("Temperature data = %d, Temperature data read = %d\n", TemperatureData[i],TempData);
  }
    return 0;
}
