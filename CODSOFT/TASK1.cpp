#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    int randomNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have picked a random number between 1 and 100 for you. Can you try guessing it?\n";

    while (guess != randomNumber){
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            cout << "Oh no that's too low! You can do this! Try again.\n";
        } else if (guess > randomNumber) {
            cout << "Oh no that's too high! You can do this! Try again.\n";
        } else {
            cout << "Congrats!!! You've guessed the number (" << randomNumber << ") correctly in " << attempts << " attempts.\n Try harder next time!;)";
        }
    }

    return 0;
}
