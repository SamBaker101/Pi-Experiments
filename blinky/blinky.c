#include <stdio.h>
#include <wiringPi.h>

#define LEDPIN 3

int main(void){
	if(wiringPiSetup() == -1){
		printf("Setup Failed");
		return 1;
	}
	printf("linker LEDPIN %d", LEDPIN);
	
	pinMode(LEDPIN, OUTPUT);
	
	while(1){
	digitalWrite(LEDPIN, LOW);
	delay(500);
	digitalWrite(LEDPIN, HIGH);
	delay(500);
	printf("boop");
	}
	


}
