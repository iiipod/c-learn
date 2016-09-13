#include<wiringPi.h>

int main()

{
	wiringPiSetup();
	pinMode(5, OUTPUT);
	for(;;)
	{
		digitalWrite(5, HIGH); delay(500);
		digitalWrite(5, LOW);  delay(500);
	}
	
	return 0;
}
		

	

