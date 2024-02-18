#include <iostream>
#include <ctime>
#include <cstdlib>

enum Choice {
    ROCK,
    PAPER,
    SCISSORS
};

void displayMenu() {
    std::cout << "1. Rock\n";
    std::cout << "2. Paper\n";
    std::cout << "3. Scissors\n";
}

Choice getUserChoice() {
    int choice;
    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;

    // Validate user input
    while (choice < 1 || choice > 3) {
        std::cout << "Invalid choice. Please enter a number between 1 and 3: ";
        std::cin >> choice;
    }

    return static_cast<Choice>(choice - 1);
}

Choice getComputerChoice() {
    // Seed for random number generation
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int randomChoice = std::rand() % 3;

    return static_cast<Choice>(randomChoice);
}

void determineWinner(Choice userChoice, Choice computerChoice) {
    std::cout << "Computer chose: ";
    switch (computerChoice) {
        case ROCK:
            std::cout << "Rock\n";
            break;
        case PAPER:
            std::cout << "Paper\n";
            break;
        case SCISSORS:
            std::cout << "Scissors\n";
            break;
    }

    std::cout << "You chose: ";
    switch (userChoice) {
        case ROCK:
            std::cout << "Rock\n";
            break;
        case PAPER:
            std::cout << "Paper\n";
            break;
        case SCISSORS:
            std::cout << "Scissors\n";
            break;
    }
    if (userChoice == computerChoice) {
        std::cout << "It's a tie!\n";
    } else if ((userChoice == ROCK && computerChoice == SCISSORS) ||
               (userChoice == PAPER && computerChoice == ROCK) ||
               (userChoice == SCISSORS && computerChoice == PAPER)) {
        std::cout << "You win!\n";
    } else {
        std::cout << "Computer wins!\n";
    }
}

int main() {
    std::cout << "Welcome to Rock, Paper, Scissors!\n";

    while (true) {
        displayMenu();

        Choice userChoice = getUserChoice();
        Choice computerChoice = getComputerChoice();

        determineWinner(userChoice, computerChoice);

        char playAgain;
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            std::cout << "Thanks for playing. Goodbye!\n";
            break;
        }
    }

    return 0;
}
