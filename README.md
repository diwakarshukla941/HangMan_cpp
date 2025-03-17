# Hangman Game in C++

## Introduction
This is a simple Hangman game implemented in C++. The game randomly selects a word, and the player has to guess it letter by letter. The player has a limited number of attempts before losing the game.

## Features
- Random word selection from a predefined list
- Allows the player to guess letters one by one
- Displays the word with guessed letters revealed
- Tracks incorrect guesses and limits the number of attempts
- Simple text-based interface
- Graphical representation of the hanging man

## Prerequisites
- A C++ compiler (GCC, Clang, MSVC, etc.)

## How to Run
1. Clone this repository or download the source code.
2. Open a terminal and navigate to the project directory.
3. Compile the program using a C++ compiler:
   ```sh
   g++ main.cpp -o hangman
   ```
4. Run the executable:
   ```sh
   ./hangman
   ```

## How to Play
- The program selects a random word from a predefined list.
- The player enters one letter at a time to guess the word.
- If the letter is in the word, it is revealed in its correct position(s).
- If the letter is incorrect, the number of remaining attempts decreases.
- A visual representation of the hanging man is displayed to indicate progress.
- The game continues until the player correctly guesses the word or runs out of attempts.

## Example Output
```
Welcome to Hangman!
Word: _ _ _ _ _
Attempts remaining: 6
  +---+
  |   |
      |
      |
      |
      |
=========
Enter a letter: a
Correct!
Word: a _ _ _ _
Attempts remaining: 6
```

## Future Improvements
- Implement word selection from an external file
- Add difficulty levels
- Enhance the ASCII art for better visual appeal

## License
This project is licensed under the MIT License.

## Author
[Your Name]

