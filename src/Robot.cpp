#include "Robot.h"

#include <iostream>
Elevator Robot::ele;
DriveT Robot::dTrain;
Intake Robot::in;
OI Robot::oi;
void Robot::RobotInit() {

}

void Robot::AutonomousInit() {
	//m_autonomousCommand.Start();
	std::cout << "Starting Auto" << std::endl;
}

void Robot::AutonomousPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// this line or comment it out.
	//m_autonomousCommand.Cancel();
	std::cout << "Starting Teleop" << std::endl;

	moveEle = new TeleEle();
	moveEle->Start();

	drive = new TeleDrive();
	drive->Start();
}

void Robot::TeleopPeriodic() {
	frc::Scheduler::GetInstance()->Run();
	printf("Imfuckingworking \n");
}

void Robot::TestPeriodic() {}

START_ROBOT_CLASS(Robot)
