/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Intake.h"
//#include "../RobotMap.h"
#include "../Robot.h"
#include <iostream>
Intake::Intake() : Subsystem("ExampleSubsystem") {

}

void Intake::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}
void Intake::mIn(){
	inLeft->Set(mSpeed);
	inRight->Set(-mSpeed);
}
void Intake::mOut(){
	inLeft->Set(-mSpeed);
	inRight->Set(mSpeed);
}
void Intake::mStop(){
	inLeft->Set(0);
	inRight->Set(0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
