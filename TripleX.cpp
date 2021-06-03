// Import packages/extensions
#include <iostream>
#include <ctime>

// decalre function as Type Name Parameters
void PrintIntro(int CurrentDifficulty)
// Code Block for function
{
    std::cout << "\nu r " << CurrentDifficulty << " hard";
    std::cout << "\nU r agent";
    std::cout << "\nNtr numbr 2 win prizez";
}

// this function returns nothing
void PrintHints(int VarSum, int VarProduct)
{
    // std::cout - Outputs to terminal
    std::cout << "\n\nther b 3 numbeez";
    std::cout << "\n- sum b " << VarSum;
    std::cout << "\n- timez b " << VarProduct << "\n";
}

// this function returns a boolean
bool PlayGame(int Difficulty)
{
    // calling already declared function
    PrintIntro(Difficulty);

    // initializing constant variables using rand() and modulus to get random numbers
    const int FirstVar = rand() % Difficulty + Difficulty;
    const int SecondVar = rand() % Difficulty + Difficulty;
    const int ThirdVar = rand() % Difficulty + Difficulty;
    const int VarSum = FirstVar + SecondVar + ThirdVar;
    const int VarProduct = FirstVar * SecondVar * ThirdVar;

    PrintHints(VarSum, VarProduct);

    // initializing variables with no value so they can be changed later
    int FirstGuess, SecondGuess, ThirdGuess;
    // std::cin - streams input from terminal
    std::cin >> FirstGuess >> SecondGuess >> ThirdGuess;
    int GuessSum = FirstGuess + SecondGuess + ThirdGuess;
    int GuessProduct = FirstGuess * SecondGuess * ThirdGuess;

    std::cout << "\nur ges iz " << FirstGuess << SecondGuess << ThirdGuess;

    // classic if statement that checks if variables are equal to other variables with ==
    // checks 2 different statements by using &&
    if (GuessSum == VarSum && GuessProduct == VarProduct)
    {
        std::cout << "\n\nYou got it right!\n";
        return true;
    }

    else
    {
        std::cout << "\n\nYou suck!\n";
        return false;
    }
}

// all C++ apps need a main function to be compiled
void main()
{
    // helps get even more random numbers
    srand(time(NULL));
    int LevelDifficulty = 1;
    const int MaxDifficulty = 9999;

    // classic while loop will keep running the code block while that statement is true
    while (LevelDifficulty <= MaxDifficulty)
    {
        // sets returned value from function to variable
        bool LevelComplete = PlayGame(LevelDifficulty);


        std::cin.clear();
        std::cin.ignore();

        if (LevelComplete)
        {
            // if level is complete up the difficulty
            ++LevelDifficulty;
        }
    }

    // when loop is broken because game is finished print this to terminal
    std::cout << "\n\nYou win the whole damn game son";

    // return from main, i assume it must always return something? maybe main can be void and not have this
    // return 0;

    // just tried it and i was right
}