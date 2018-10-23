//========================================
//This Line is only for Editing on VScode.
#include "robotc.h"
//========================================

#define wheelL motorA
#define wheelR motorD

#define motor1 motorB
#define motor2 motorC

#define SYSTEM_ALL 				0xFFFFFFFF
#define SYSTEM_WHEEL			0x00000001
#define SYSTEM_MOTOR			0x00000002
#define SYSTEM_ENCODER_WHEEL	0x00000004
#define SYSTEM_ENCODER_MOTOR	0x00000008
#define SYSTEM_GYROSEN			0x00000010


void stopMotor() {
	for (int i = motor[wheelL]; i >= 0; ++i) {

	}
}

void Init(int flag) {
	if (flag & SYSTEM_WHEEL) {
		motor[wheelL] = 0;
		motor[wheelR] = 0;
	}
	
	if (flag & SYSTEM_MOTOR) {
		motor[motor1] = 0;
		motor[motor2] = 0;
	}
	
	if (flag & SYSTEM_ENCODER_WHEEL) {
		
	}
}

task main()
{



}
