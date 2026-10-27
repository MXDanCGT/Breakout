#include "EffectBallFastBall.h"


EffectBallFastBall::EffectBallFastBall() {}
EffectBallFastBall::EffectBallFastBall(float givenMaxDuration, std::vector<std::string> givenMutexEffects, Ball* givenBall) : EffectBall::EffectBall(givenMaxDuration, givenMutexEffects, givenBall) {}

void EffectBallFastBall::applyEffect()
{
	_ball->setVelocity(2.f, 5.0f); //Worth noting there is a duration tied into the effect on the balls end? 
}