#pragma once
#include "actorwrapper.h"
#include "wrapperstructs.h"

class BoostWrapper;
class PriWrapper;

class BAKKESMOD_PLUGIN_IMPORT CarWrapper : public ActorWrapper
{
public:
	CONSTRUCTORS(CarWrapper)

	//AUTO GENERATED
	GETSETH(bool, IsDriving)
	GETSETH(bool, IsOnGround)
	GETSETH(bool, HasJumped)
	GETSETH(bool, HasDoubleJumped)
	GETSETH(float, AddedBallForceMultiplier)
	GETSETH(bool, DisableGravity)
	GETSETH(bool, DemolishOnOpposingGround)
	GETSETH(bool, WasOnOpposingGround)
	GETSETH(bool, DemolishOnGoalZone)
	GETSETH(bool, WasInGoalZone)
	GETSETH(bool, OverrideHandbrakeOn)
	GETSETH(bool, OverrideBoostOn)
	GETSETH(float, AddedCarForceMultiplier)
	GETSETH(float, MaxTimeForDodge)
	GETSETH(float, LastWheelsHitBallTime)
	BoostWrapper GetBoost();
	PriWrapper GetPRI();

	//SELF IMPLEMENTED
	bool IsBoostCheap();
	void SetBoostCheap(bool b);
	void SetCarRotation(Rotator rotation);
	void ForceBoost(bool force);
	string GetOwnerName();
	void Unfreeze();
	ControllerInput GetInput();
	void SetInput(ControllerInput input);
private:
	PIMPL
};
