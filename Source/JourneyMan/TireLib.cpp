// Fill out your copyright notice in the Description page of Project Settings.


#include "TireLib.h"

void UTireLib::modifyTyreConfig(UWheeledVehicleMovementComponent* Component, TArray<FWheelSetupBp> Tyres)
{
	TArray<FWheelSetup> CTyres;
	for (int i = 0; i < Tyres.Num(); i++)
	{
		FWheelSetup tire;
			tire.WheelClass = Tyres[i].WheelClass;
			tire.BoneName = Tyres[i].BoneName;
			tire.AdditionalOffset = Tyres[i].AdditionalOffset;
			tire.bDisableSteering = Tyres[i].bDisableSteering;
	}
	Component->WheelSetups = CTyres;
	Component->CreateVehicle();
	Component->RecreatePhysicsState();
}
