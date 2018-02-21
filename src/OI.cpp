/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>
#include "Commands/IntakeIn.h"
#include "Commands/IntakeOut.h"
OI::OI() {
	// Process operator interface input here.

	o_joyIn.WhileHeld(new IntakeIn());
	o_joyOut.WhileHeld(new IntakeOut());


}
frc::Joystick& OI::getJD(){
	return m_joy;
}
frc::Joystick& OI::getJO(){
	return o_joy;
}
