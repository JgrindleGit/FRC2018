/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include <WPILib.h>
#include <Joystick.h>
class OI {
public:
	OI();
	frc::Joystick& getJD();
	frc::Joystick& getJO();

private:
	frc::Joystick m_joy{0};
	frc::Joystick o_joy{1};
	frc::JoystickButton o_joyIn{&m_joy,1};
	frc::JoystickButton o_joyOut{&m_joy,2};

};
