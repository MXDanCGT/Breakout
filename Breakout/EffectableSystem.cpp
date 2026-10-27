#include "EffectableSystem.h"
#include "Paddle.h"
#include "Ball.h"

#include "EffectBallFastBall.h"

EffectableSystem::EffectableSystem(Paddle* paddle, Ball* ball) : _paddle(paddle), _ball(ball)
{
	//Here we define the map between "tags" and their actual effects...

	_tagEffectMap.insert({ "NOTHING", std::make_shared<EffectBase>() });

	_tagEffectMap.insert({ "FAST_BALL", std::make_shared<EffectBallFastBall>(5.f, std::vector<std::string>({"SLOW_BALL"}), ball)
});



}

EffectableSystem::~EffectableSystem()
{

}

void EffectableSystem::update(float dt)
{
	//Adding new effectables

	for (int i = 0; i < _effectQueue.size(); ++i)
	{
		std::string iStr = _effectQueue.front();
		_effectQueue.pop(); //I am still unsure why "pop" doesn't return a value in C++ STL

		std::weak_ptr<EffectBase> wp = _tagEffectMap.at(iStr);

		auto r = wp.lock();
		if (!r)
			return; //damn.



		for (std::string mxStr : r->getMutexEffects())
		{
			//If we find this here, we want to replace the old effect with the new effect...
			//TODO HERE
		}

		//We now apply the new effect
		r->applyEffect();
		_activeEffects.push_back(iStr);
	}


	
	//Paddle...







}