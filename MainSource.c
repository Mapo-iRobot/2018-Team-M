#define wheelL motorA
#define wheelR motorD

#define SYSTEM_ALL ~0
#define SYSTEM_MOTOR 0x00000001
#define SYSTEM_ENCODER 0x00000003


void stopMotor() {
	for (int i = motor[wheelL]; i >= 0; ++i) {

	}
}

void Init(int flag = SYSTEM_ALL) {

}

task main()
{



}
