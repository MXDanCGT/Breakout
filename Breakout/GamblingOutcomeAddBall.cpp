#include "GamblingOutcomeAddBall.h"

GamblingOutcomeAddBall::GamblingOutcomeAddBall(int Weight, GamblingSystem* gamblingSystem) : GamblingOutcomeBase(Weight, gamblingSystem)
{
	_outcomeString = "You got another ball. Yipee.";
}

void GamblingOutcomeAddBall::activateOutcome()
{
	if (_gamblingSystem)
	{
		_gamblingSystem->GetGameManager()->addLives(1);
	}
}