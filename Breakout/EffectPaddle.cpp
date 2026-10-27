#include "EffectPaddle.h"
#include "Paddle.h"


EffectPaddle::EffectPaddle() : _paddle(nullptr) {}
EffectPaddle::EffectPaddle(Paddle* givenPaddle) : _paddle(givenPaddle) {}