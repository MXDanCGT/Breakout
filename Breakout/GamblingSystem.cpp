#include "GamblingSystem.h"
#include "GameManager.h"
#include "GamblingOutcomeBase.h"
#include "GamblingOutcomeAddBall.h"
#include "Paddle.h"
#include "Ball.h"

//It is worth noting: SFML (according to its  documentation) handles seeding random at start up, so its not something we need to worry about
GamblingSystem::GamblingSystem(sf::RenderWindow* window, Paddle* paddle, Ball* ball, GameManager* gameManager) : 
	_window(window), _paddle(paddle), _ball(ball), _gameManager(gameManager), _randMin(0), _randMax(0)
{
	//FOR NOW this is where we will fill our gambling outcomes

	_gamblingOutcomes.push_back(
	std::make_unique<GamblingOutcomeBase>(new GamblingOutcomeBase(3, this))
	);


	_gamblingOutcomes.push_back(
		std::make_unique<GamblingOutcomeAddBall>(new GamblingOutcomeAddBall(1, this))
	);
}


//Setting up random device
void GamblingSystem::Initialise()
{
	//Calculate the maximum of the random number generator, accounting for the weights of our gambling outcomes
	
	int TotalWeight = 0.f;
	for (int i = 0; i < _gamblingOutcomes.size(); ++i)
	{
		if (_gamblingOutcomes[i])
			TotalWeight += _gamblingOutcomes[i].get()->GetWeight();
	}

	_randMax = TotalWeight;

	//Initialise random device and uniform int distribution variables
	//TODO this could be a bit better
	_randomGenerator = std::mt19937(_rd());
	_distribution = std::uniform_int_distribution<>(_randMin, _randMax);
}

void GamblingSystem::RollGamblingOutcome()
{

}