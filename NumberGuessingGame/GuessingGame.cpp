// Include statements
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "GuessingGame.h"

int GuessingGame::generateRandomNumber(int upperBound) // Creates a random number between 1 and a given upper bound
{
	srand(time(0)); // Uses time as a seed to generate a random number
	return randomNumber = rand() % upperBound + 1;
}

void GuessingGame::selectDifficuly(std::string gameDifficultyLevel) // Handles logic and generates value based on user's difficulty selection.
{
	if (gameDifficultyLevel == "1" || gameDifficultyLevel == "easy" || gameDifficultyLevel == "Easy")
	{
		randomNumber = generateRandomNumber(5);
		std::cout << "Guess a number between 1 and 5" << std::endl;
		isValid = true;
	}
	else if (gameDifficultyLevel == "2" || gameDifficultyLevel == "medium" || gameDifficultyLevel == "Medium")
	{
		randomNumber = generateRandomNumber(10);
		std::cout << "Guess a number between 1 and 10" << std::endl;
		isValid = true;
	}
	else if (gameDifficultyLevel == "3" || gameDifficultyLevel == "hard" || gameDifficultyLevel == "Hard")
	{
		randomNumber = generateRandomNumber(20);
		std::cout << "Guess a number between 1 and 20" << std::endl;
		isValid = true;
	}
	else
	{
		std::cout << "Please enter a valid option." << std::endl;
		isValid = true;
	}
	
}

void GuessingGame::checkGuess()
{
	if (playerGuess == randomNumber)
	{
		std::cout << "That's correct!" << std::endl << "The number was " << randomNumber << "!" << std::endl;
		playerWon = true;
		exit(0); // Brained this, not that that's super impressive
	}
	else if (playerGuess > randomNumber)
	{
		std::cout << "That's to high! Try again." << std::endl;
	}
	else {
		std::cout << "That's to low! Try again." << std::endl;
	}
}

void GuessingGame::play() 
{
	playerWon = false;
	isValid = true;
	do {
		std::cout << "Please select a difficulty:\n1) Easy\n2) Medium\n3) Hard" << std::endl;
		std::cin >> userDifficulty;
		selectDifficuly(userDifficulty);
	} while (!isValid);
	
	for (int i = 3; i > 0; i--)
	{	
		if (i < 3 && !playerWon) std::cout << "Guesses left: " << i << std::endl;
		std::cin >> playerGuess;
		checkGuess();
	}

	if (!playerWon)
	{
		std::cout << "You lose!" << std::endl;
	}
}