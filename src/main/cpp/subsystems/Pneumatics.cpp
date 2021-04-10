/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Pneumatics.h"

Pneumatics::Pneumatics() 
{
    SetName("Pneumatics");
}

void Pneumatics::Single_Solenoid_Off()
{
    ssolenoid.Set(false);
}
void Pneumatics::Single_Solenoid_On()
{
    ssolenoid.Set(true);
}
void Pneumatics::Double_Solenoid_Forward()
{
    dsolenoid.Set(frc::DoubleSolenoid::kForward);
}
void Pneumatics::Double_Solenoid_Backward()
{
    dsolenoid.Set(frc::DoubleSolenoid::kReverse);
}

// This method will be called once per scheduler run
void Pneumatics::Periodic() {}
