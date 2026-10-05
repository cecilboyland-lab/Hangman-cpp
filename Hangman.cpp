/******************************************************************************
C.Boyland 11-09-2023 This program was created to display and play a game of 
Hangman. The theme will be naming the mutants from Xmen.
*******************************************************************************/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

int main() {
    srand(static_cast<int>(time(0)));
    vector<string> words = {"wolverine", "cyclops", "storm", "rogue", "beast",
   "jeangrey", "nightcrawler", "colossus", "professorx", "magneto",
    "gambit", "iceman", "shadowcat", "deadpool", "apocalypse",
   "bishop", "angel", "juggernaut", "quicksilver", "jubilee",
    "havok", "cable", "mystique", "sabertooth", "magma"};
    
    const int maxAttempts = 5;
    string wordToGuess = words[rand() % words.size()];
    string guessedLetters(wordToGuess.size(), '_');
    int attempts = maxAttempts;
    char guess;
    
    
     

    cout << "Welcome to Xmen Hangman!";

    // This loop was created for the Hangman game.
    while (attempts > 0) {
        cout << " Current word: ";
        for (char letter : guessedLetters) {
            cout << letter << ' ';
        }

        cout << " Guessed letters: " << guessedLetters;
        cout << " Attempts left: " << attempts;

        // Get the letter guessed for the user thats playing.
        cout << " Guess a letter: ";
        cin >> guess;
        guess = tolower(guess); 

        bool found = false;

        // Checking to see if the guessed letter is in the word.
        for (int i = 0; i < guessedLetters.size(); ++i) {
            if (wordToGuess[i] == guess && guessedLetters[i] == '_') {
                guessedLetters[i] = guess;
                found = true;
            }
        }

        // Update game state based on the guess
        if (!found) {
            attempts--;
            cout << " Incorrect guess!";
        } else {
            cout << " Correct guess!";

            // Check if the word has been completely guessed
            if (guessedLetters == wordToGuess) {
                cout << "Congratulations! You guessed the word: '" << wordToGuess << "'.";
                break;
            }
        }
    }

    // Display game outcome
    if (attempts == 0) {
        cout << " Sorry, you ran out of attempts. The word was '" << wordToGuess << "'.";
    }

    return 0;
}



