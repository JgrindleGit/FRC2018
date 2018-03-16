
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
	inLeft->Set(mSpeed*.55);
	inRight->Set(-mSpeed*.55);
}
void Intake::mOut(){
	inLeft->Set(-mSpeed);
	inRight->Set(mSpeed);
}
void Intake::mStop(){
	inLeft->Set(0);
	inRight->Set(0);
}


void Intake::DropIn(){
	if(isDown == false){
		dropper->Set(0.5);
	}else {
		dropper->Set(0);
		isDown = true;
	}

}
void Intake::DropStop(){
	dropper->Set(0);
}
bool Intake::GetDropCheck(){
	return dropCheck->Get();
}
