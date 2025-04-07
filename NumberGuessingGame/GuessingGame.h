// Include Statements and whatever pragma means
#pragma once
#include <iostream>
#include <string>

class GuessingGame
{
public:
	// GuessingGame methods
	int generateRandomNumber(int upperBound);
	void selectDifficuly(std::string gameDifficultyLevel);
	void checkGuess();
	void play();

private:
	// GuessingGame properties
	int playerGuess;
	int randomNumber;
	bool playerWon;
	bool isValid;
	std::string	userDifficulty;
};