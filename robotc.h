//This File is for Editing on VScode.
#define motorA 0
#define motorB 1
#define motorC 2
#define motorD 3

int motor[];
int nMotorEncoder[];
int SensorValue[];

void delay(int mills);
int displayBigTextLine(int line, const char* formatText, ...);

#define task void