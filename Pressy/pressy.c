#include <stdio.h>
#include <wiringPi.h>

#define LEDPIN 3
#define BUTTON 1

int press = 0;

int main(void){
	if(wiringPiSetup() == -1){
		printf("Setup Failed");
		return 1;
	}
	printf("linker LEDPIN %d", LEDPIN);
	
	pinMode(LEDPIN, OUTPUT);
	pinMode(BUTTON, INPUT);
	pullUpDnControl(BUTTON, PUD_DOWN);
	
	digitalWrite(LEDPIN, LOW);	
	
	while(1){
	if (digitalRead(BUTTON) == 1){
		digitalWrite(LEDPIN, HIGH);
		
		while (digitalRead(BUTTON) == 1){
			delay(100);
			}
	digitalWrite(LEDPIN, LOW);	
		}
	delay(100);
	}
	


}
