/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "IntakeDrop.h"
#include "../Robot.h"

IntakeDrop::IntakeDrop() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(&Robot::in);
}

// Called just before this Command runs the first time
void IntakeDrop::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void IntakeDrop::Execute() {
	Robot::in.DropIn();
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeDrop::IsFinished() {
	return Robot::in.GetDropCheck();
}

// Called once after isFinished returns true
void IntakeDrop::End() {
	Robot::in.DropStop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeDrop::Interrupted() {
	End();
}
