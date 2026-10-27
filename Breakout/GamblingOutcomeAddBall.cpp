#include "GamblingOutcomeAddBall.h"
#include "GamblingSystem.h"

GamblingOutcomeAddBall::GamblingOutcomeAddBall()
{}


GamblingOutcomeAddBall::GamblingOutcomeAddBall(int Weight, GamblingSystem* gamblingSystem) : GamblingOutcomeBase(Weight, gamblingSystem)
{
	_outcomeString = "You got another ball. Yipee.";
}

std::string GamblingOutcomeAddBall::activateOutcome()
{
	if (_gamblingSystem)
	{
		_gamblingSystem->GetGameManager()->addLives(1);
	}

	return GamblingOutcomeBase::activateOutcome();
}