#pragma once

/*
The effectable system handles all the effects in play at once, checking if they can be and applying them, ticking them down, and removing them when done.
It does this by use of "effectable components" that store a "tag" referring to an effect, with a time to indicate how long left.
This will resolve any issues, decode the tag, then "apply" it
*/
/*budget ecs system*/

/*Struct containing the */
struct FEffect
{
	FEffect(std::string givenTag, std::vector<std::string> givenME) : _effectTag(givenTag), _mutexEffects(givenME)
	{
	}	

	/*Tag that the effect manager will reference when applying and unapplying this*/
	std::string _effectTag;

	float _timeRemaining;

	/*vector of the effect tags that cannot be applied at the same time*/
	std::vector<std::string> _mutexEffects;
};


class EffectableSystem
{
public:

	EffectableSystem(class Paddle* paddle, class Ball* ball);

	~EffectableSystem();

	/*update our effects - tick down the timers, apply anything pending, remove anything old*/
	void update(float dt);



	/*Anything else that requires other effects can go here...*/

	class Paddle* _paddle;
	class Ball* _ball;


};