/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int kLeftMotor = 1;
// constexpr int kRightMotor = 2;
constexpr int kLeftDr = 0;
constexpr int kRightDr = 1;

constexpr int kLift = 2;
constexpr int kBotLim = 2;
constexpr int kTopLim1 = 3;
constexpr int kTopLim2 = 4;

constexpr int kLeftIn = 3;
constexpr int kRightIn= 4;

constexpr int kDropper = 5;
constexpr int kDropCheck = 5;

constexpr int mSpeed= 1;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int kRangeFinderPort = 1;
// constexpr int kRangeFinderModule = 1;
