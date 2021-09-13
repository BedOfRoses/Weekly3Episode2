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
	//int max{}; //Calls upon the randomnumber generator
	std::srand(std::time(0)); //seeds number to time

	int userGuess{};		 //User input
	int theGuessCounter{};	 //How many tries in one game
	int randomNum{};		 //The random number
	int userTries{};		 //How many tries --> userinput
	int highScore = userTries;	 //

	randomNum = rand() % 20 + 1;	//Creates a randomnumber from 1 to 10.

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

int difficulityHard()
{
	//int max{}; //Calls upon the randomnumber generator
	std::srand(std::time(0)); //seeds number to time

	int userGuess{};		 //User input
	int theGuessCounter{};	 //How many tries in one game
	int randomNum{};		 //The random number
	int userTries{};		 //How many tries --> userinput
	int highScore = userTries;	 //

	randomNum = rand() % 30 + 1;	//Creates a randomnumber from 1 to 10.

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
	return 0;
}



int menu()
{
	char userInput{}; //Choose difficulity

	std::cout << "Choose a difficulity: " << std::endl;
	std::cout << "a. A. or 1 = easy 1 to 10: " << std::endl;
	std::cout << "b. B. or 2 = medium 1 to 20: " << std::endl;
	std::cout << "c. C. or 3 = hard 1 to 30: " << std::endl;
	std::cin >> userInput;


	switch (userInput) {
	case 'a': case 'A': case 1:
		difficulityEasy();
		break;
	case 'b': case 'B': case 2:
		difficulityMedium();
		break;
	case 'c': case 'C': case 3:
		difficulityHard();
		break;
	}


	return 0;
}
