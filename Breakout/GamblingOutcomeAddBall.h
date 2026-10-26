#pragma once
#include "GamblingOutcomeBase.h"

/*Gambling outcome simply adding 1 ball to the lives counter*/
class  GamblingOutcomeAddBall : public GamblingOutcomeBase
{

public:

	GamblingOutcomeAddBall(int Weight, GamblingSystem* gamblingSystem);

	virtual void activateOutcome() override;
};