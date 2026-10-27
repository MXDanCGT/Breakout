#pragma once

#include <string>
#include <vector>

/*An effectable component allows an object to feel (however many) effects, storing a list of the tags of the effects currently on it*/


class EffectableComponent
{
public:

	EffectableComponent();


	void AddEffect(FEffect);

	void RemoveEffect(FEffect);


private:

	//TODO linked list if i have time?
	std::vector<FEffect> _effects;

};