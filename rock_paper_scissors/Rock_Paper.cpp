#include <iostream>
#include <cstdlib>
#include <ctime>

enum class Choice {
    ROCK,
    PAPER,
    SCISSORS
};

int main() {
    srand(static_cast<unsigned int>(time(0)));

    std::cout << "Welcome to Rock, Paper, Scissors!\n";

    while (true) {
        std::cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors, 9 to quit): ";
        int playerChoice;
        std::cin >> playerChoice;

        if (playerChoice == 9) {
            std::cout << "Thanks for playing. Goodbye!\n";
            break;
        }

        if (playerChoice < 0 || playerChoice > 2) {
            std::cout << "Invalid choice. Please try again.\n";
            continue;
        }

        Choice player = static_cast<Choice>(playerChoice);
        int computerChoice = rand() % 3;
        Choice computer = static_cast<Choice>(computerChoice);

        std::cout << "You chose: ";
        switch (player) {
            case Choice::ROCK:
                std::cout << "Rock\n";
                break;
            case Choice::PAPER:
                std::cout << "Paper\n";
                break;
            case Choice::SCISSORS:
                std::cout << "Scissors\n";
                break;
        }

        std::cout << "Computer chose: ";
        switch (computer) {
            case Choice::ROCK:
                std::cout << "Rock\n";
                break;
            case Choice::PAPER:
                std::cout << "Paper\n";
                break;
            case Choice::SCISSORS:
                std::cout << "Scissors\n";
                break;
        }

        if (player == computer) {
            std::cout << "It's a tie!\n";
        } else if ((player == Choice::ROCK && computer == Choice::SCISSORS) ||
                   (player == Choice::PAPER && computer == Choice::ROCK) ||
                   (player == Choice::SCISSORS && computer == Choice::PAPER)) {
            std::cout << "You win!\n";
        } else {
            std::cout << "Computer wins!\n";
        }

        std::cout << std::endl;
    }

    return 0;
}