/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>
#include "RobotMap.h"
#include <frc/Talon.h>

class Flag : public frc2::SubsystemBase {
 public:
  Flag();
  void Move(double percent);
  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic();

 private:
  frc::Talon motor{TALON_MOTOR};

  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
