#pragma once
#include "GamblingOutcomeBase.h"

/*Gambling outcome simply adding 1 ball to the lives counter*/
class  GamblingOutcomeAddBall : public GamblingOutcomeBase
{

public:

	GamblingOutcomeAddBall();

	GamblingOutcomeAddBall(int Weight, GamblingSystem* gamblingSystem);

	virtual std::string activateOutcome() override;
};