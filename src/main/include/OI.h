/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/Command.h>
#include <vector>
#include <frc/Joystick.h>
#include <frc2/command/button/JoystickButton.h>


#include "subsystems/Drive.h"

/**
 * This class is where the bulk of the robot should be declared.  Since
 * Command-based is a "declarative" paradigm, very little robot logic should
 * actually be handled in the {@link Robot} periodic methods (other than the
 * scheduler calls).  Instead, the structure of the robot (including subsystems,
 * commands, and button mappings) should be declared here.
 */
class OI {
public:
  OI();
  float DLAxis();
  float DRAxis();
  frc2::Command* GetAutonomousCommand();

private:
  // The robot's subsystems and commands are defined here...
  frc::Joystick m_joy{0};
  std::shared_ptr<frc::Joystick> Driverjoystick;
  std::vector<frc2::JoystickButton *> Driverbtns;
  Drive m_drive;
  void ConfigureButtonBindings();
  
};
