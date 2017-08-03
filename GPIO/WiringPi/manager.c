
#include <wiringPi.h>
int main (void) {

 	wiringPiSetup() ;
    pinMode(0, OUTPUT) ;

	for (;;) {
         digitalWrite(0, HIGH) ;
         delay (500) ;
         digitalWrite(0, LOW) ;
         delay (500) ;
	}

return 0 ;
}

// 通过以下命令进行编译，编译时需i包含WiringPi库: 
// gcc -Wall -o blink blink.c -lwiringPi
// 
// 官网 http://wiringpi.com/
// 下载网站 http://wiringpi.com/download-and-install/。