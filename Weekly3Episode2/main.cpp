#include <iostream>
#include <ctime>
#include <cstdlib>


int difficulityEasy();
int difficulityMedium();
int difficulityHard();
int menu();



//Guess a number program

int main() {
	
	menu();
	difficulityEasy();

	return 0;
}

int difficulityEasy()
{
	//int max{}; //Calls upon the randomnumber generator
	std::srand(std::time(0)); //seeds number to time

	int userGuess{};		 //User input
	int theGuessCounter{};	 //How many tries in one game
	int randomNum{};		 //The random number
	int userTries{};		 //How many tries --> userinput
	int highScore = userTries;	 //

	randomNum = rand() % 10 + 1;	//Creates a randomnumber from 1 to 10.

	//The game
	for (int i{}; i < 5; i++) {
		do {
			
			userTries = 0;

			
			//Since we havent even started, there shouldnt be a highscore visible before the game has even started
			if (i != 0)
			{
				std::cout << "Your highscore is : " << highScore << std::endl;
				if (highScore > theGuessCounter)
				{
					std::cout << "You beat your highscore!";
				}
			}
			//else if(i > 5 && userGuess == randomNum)
			//{
			//	//std::cout << "Your highscore is: " << highScore;
			//	//return 0;
			//}

			std::cout << "Guess the number from 1 to 10: ";
			std::cin >> userGuess; 	//Lets user type a guess, and counts for each do-while loop in theGuessCounter
			
			if (userGuess < randomNum)
			{
				std::cout << "lol too low" << std::endl;
				theGuessCounter++;
			}
			
			else if (userGuess > randomNum)
			{
				std::cout << "Lol too high" << std::endl;
				theGuessCounter++;
			}
			
			else if (userGuess == randomNum)
			{
				system("cls");
				std::cout << "Correct, you had " << theGuessCounter << " total tries" << std::endl;
				

				


				/*theGuessCounter = 0;*/
				/*if (highScore > theGuessCounter)
				{
					std::cout << "Go again! You got this! ";
				}
				else if(highScore < theGuessCounter) 
				{
					std::cout << "You beat ur previous score!";
				}*/
			
			}
			

		} while (userGuess != randomNum);
	}



	return 0;
}

int difficulityMedium()
{
	return 0;
}

int difficulityHard()
{
	return 0;
}

int menu()
{
	char userInput{}; //Choose difficulity


	switch (userInput) {
	case 'a': case 'A': case 1:
		
		break;


	}


	return 0;
}
