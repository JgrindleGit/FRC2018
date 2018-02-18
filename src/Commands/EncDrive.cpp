/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "EncDrive.h"

EncDrive::EncDrive(double m_dist, double m_kP,double m_kI, double m_kD) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(&Robot::dTrain);
}

// Called just before this Command runs the first time
void EncDrive::Initialize() {
	//gyPID = new PID();
	//encPID = new PID();
}

// Called repeatedly when this Command is scheduled to run
void EncDrive::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool EncDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void EncDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void EncDrive::Interrupted() {

}
