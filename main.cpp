#include <iostream>
#include <cstdlib>
int userOption;
int computerOption;
int userScore;


void menu() {

    std::cout << "\n\n\n********WELCOME TO THE ROCK-PAPER-SCISSORS GAME!*********\n\n\n" << std::endl;
    std::cout << "Rules:\n1.User plays against the computer best of 3\n2.Rock beats scissors\n3.Paper beats rock\n4.Scissors beats paper\n" << std::endl;
    std::cout << "Choices:\n1.Rock\n2.Scissors\n3.Paper\n";


}

void actualGame() {
    for (int i = 1; i <= 3; i++) {
        std::cout << "Enter your choice (1-3): " << std::endl;
    std::cin >> userOption;

    computerOption = rand() % 3+1; //Makes the computer generate a random number between 1 and 3.


    //nested if-statement for the logic in the game!
    if(userOption == 1 && computerOption == 2 || userOption == 2 && computerOption == 3 || userOption == 3 && computerOption == 1) {

        std::cout << "You win!" << "The computer chose "<< computerOption << std::endl;//logic for the user to win
        userScore = userScore + 1;
    }
    else if(userOption == computerOption) {

        std::cout << "DRAW!" << "The computer chose "<< computerOption << std::endl;//login for a draw
        userScore = userScore + 0;//The user score remains the same!
    }
    else
        std::cout << "You lose!" << "The computer chose "<< computerOption << std::endl;//any other outcome the user loses!
        userScore = userScore + 0;//The user score still remains the same since the user has lost
    }


}
int main() {
    int replayGame;


    menu();
    actualGame();

    std::cout << "GAME OVER!\nYour score is " << userScore << std::endl;

    //To make the user replay the game!
    std::cout << "Do you want to replay the game?(1=yes): ";
    std::cin >> replayGame;
    if(replayGame == 1) {
        userScore = 0;
        main();
    }
    else
        return 0;
    }
