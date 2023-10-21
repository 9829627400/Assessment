#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RockPaperScissorsGame {
public:
    // Function to display the game menu
    void displayMenu() {
        cout << "Rock, Paper, Scissors Game Menu" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "4. Quit" << endl;
    }

    // Function to play the game
    void playGame() {
        int userChoice;
        int computerChoice;

        while (true) {
            displayMenu();
            cout << "Enter your choice (1-4): ";
            cin >> userChoice;

            if (userChoice == 4) {
                cout << "Thanks for playing. Goodbye!" << endl;
                break;
            }

            if (userChoice < 1 || userChoice > 3) {
                cout << "Invalid choice. Please choose 1, 2, or 3." << endl;
                continue;
            }

            computerChoice = (rand() % 3) + 1;
            cout << "Computer chose: " << getChoiceName(computerChoice) << endl;
            cout << "You chose: " << getChoiceName(userChoice) << endl;

            int result = determineWinner(userChoice, computerChoice);
            if (result == 0) {
                cout << "It's a tie!" << endl;
            } else if (result == 1) {
                cout << "You win!" << endl;
            } else {
                cout << "Computer wins!" << endl;
            }
        }
    }

private:
    // Function to convert choice number to a string
    string getChoiceName(int choice) {
        if (choice == 1) {
            return "Rock";
        } else if (choice == 2) {
            return "Paper";
        } else {
            return "Scissors";
        }
    }

    // Function to determine the winner
    int determineWinner(int userChoice, int computerChoice) {
        if (userChoice == computerChoice) {
            return 0;  // It's a tie
        } else if ((userChoice == 1 && computerChoice == 3) ||
                   (userChoice == 2 && computerChoice == 1) ||
                   (userChoice == 3 && computerChoice == 2)) {
            return 1;  // User wins
        } else {
            return -1; // Computer wins
            
        }
    }
};

int main() {
    srand(time(0));  // Seed for random number generation

    RockPaperScissorsGame game;
    game.playGame();

    return 0;
}
