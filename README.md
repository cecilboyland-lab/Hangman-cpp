# Hangman (C++)

A console Hangman game written in C++. The program randomly picks an X-Men character name, and the player guesses one letter at a time before running out of attempts.

Originally written in November 2023 for a C++ programming course at Saint Leo University, then updated with bug fixes.

## Features

- Picks a random word from a list of 30 X-Men character names
- 5 incorrect guesses allowed before the game ends
- Shows the current word progress and the letters already guessed
- Case-insensitive guessing (`A` and `a` both count)

## How to Build and Run

**With g++ (Linux, macOS, or Windows with MinGW):**
```
g++ Hangman.cpp -o hangman
./hangman
```

**With Visual Studio / MSVC (Windows Developer Command Prompt):**
```
cl /EHsc Hangman.cpp
Hangman.exe
```

## Example

```
Welcome to Xmen Hangman!
Current word: _ _ _ _ _ _
Guessed letters:
Attempts left: 5
Guess a letter: i
Current word: i _ _ _ _ _
...
```

## Concepts Used

- `std::vector` and `std::string`
- Random number generation with `srand` / `rand`
- Loops, conditionals, and character handling with `tolower`
