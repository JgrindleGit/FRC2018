/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "TeleEle.h"
#include "../Robot.h"
TeleEle::TeleEle() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(&Robot::ele);
}

// Called just before this Command runs the first time
void TeleEle::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TeleEle::Execute() {
	auto& joyO = Robot::oi.getJO();
	double speed = joyO.GetY();
	Robot::ele.Move(speed);
}

// Make this return true when this Command no longer needs to run execute()
bool TeleEle::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleEle::End() {
	Robot::ele.Move(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleEle::Interrupted() {

}
