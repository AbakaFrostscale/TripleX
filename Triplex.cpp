#include <iostream>
#include <ctime>

void PlayGame()
{
	srand(time(NULL));
	int PlayerLevel, MaxLevel;
	PlayerLevel = 1;
	MaxLevel = 5;
	std::cout << "Enter your name: ";
		char PlayerName[20];
		std::cin >> PlayerName;
	while (PlayerLevel <= MaxLevel)
	{
		int GuessA, GuessB, GuessC, GuessProd, GuessSum;
		int PlayerGuessA, PlayerGuessB, PlayerGuessC, PlayerGuessProd, PlayerGuessSum;
		std::cout << "Hey there " << PlayerName << " welcome to the game\n";
		std::cout << "You are an adventurer that has stumbled upon a level " << PlayerLevel << " three letter code chest\n";
		std::cout << "Decipher the code to unlock the marvels within\n";
		GuessA = rand()%10;
		GuessB = rand()%10;
		GuessC = rand()%10;
		GuessSum = GuessA + GuessB + GuessC;
		GuessProd = GuessA * GuessB * GuessC;
		std::cout << "The sum of the codes is: " << GuessSum << "\n";
		std::cout << "The product of the code is: " << GuessProd << "\n";
		std::cin >> PlayerGuessA;
		std::cin >> PlayerGuessB;
		std::cin >> PlayerGuessC;
		PlayerGuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
		PlayerGuessProd = PlayerGuessA * PlayerGuessB * PlayerGuessC;
		if (GuessSum == PlayerGuessSum && GuessProd == PlayerGuessProd)
			{
				std::cout << "You have won the game\n\n";
				PlayerLevel = PlayerLevel + 1;
			}
		else
			{
				std::cout << "You have lost the game\n\n";
			}
		}
}

int main ()
{
	
	PlayGame();
	return 0;
}
