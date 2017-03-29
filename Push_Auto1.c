
void auto1L()
{
	extendArmR();
	driveForward(1350);
	turnLeft(350);
	driveForward(2200);
	driveBack(400);
	driveForward(900);
	driveBack(400);
	driveForward(900);
	toStop();
}


void auto1R()
{
	extendArmL();
	driveForward(1300);
	turnRight(400);
	driveForward(2200);
	driveBack(400);
	driveForward(900);
	driveBack(400);
	driveForward(900);
	toStop();
}
