/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "TeleDrive.h"
#include "../Robot.h"
#include <iostream>
TeleDrive::TeleDrive() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(&Robot::dTrain);
}

// Called just before this Command runs the first time
void TeleDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TeleDrive::Execute() {
	auto& joyD = Robot::oi.getJD();
	double x = joyD.GetX();
	double y = joyD.GetY();
	Robot::dTrain.JoyDr(-y,-x);
}

// Make this return true when this Command no longer needs to run execute()
bool TeleDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleDrive::Interrupted() {

}
