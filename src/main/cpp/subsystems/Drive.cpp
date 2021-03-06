/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Drive.h"

#include "RobotMap.h"
#include <frc/Joystick.h>



// To Do: Set up Invert

Drive::Drive() {

    speedControllerFL.SetInverted(SCFL_INVERTED);
    speedControllerFR.SetInverted(SCFR_INVERTED);
    speedControllerBL.SetInverted(SCBL_INVERTED);
    speedControllerBR.SetInverted(SCBR_INVERTED);
}

void Drive::setMotors(float leftSpeed, float rightSpeed) {
    diffDrive.TankDrive(leftSpeed, rightSpeed, false);
}

// This method will be called once per scheduler run
void Drive::Periodic() {
    
}
