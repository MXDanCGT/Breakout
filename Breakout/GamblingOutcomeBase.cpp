#include "GamblingOutcomeBase.h"

GamblingOutcomeBase::GamblingOutcomeBase(int Weight, GamblingSystem* gamblingSystem) : _gamblingSystem(gamblingSystem), _weight(Weight)
{
	_outcomeString = "Nothing happens. Womp Womp.";
}

void GamblingOutcomeBase::activateOutcome()
{
}