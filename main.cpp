#include <iostream>
#include <cstdlib> // Include for system("CLS") or system("clear")
#include "hangman_functions.h"
#include "hangman_functions.cpp"
#include <vector>

using namespace std;

int main()
{
    greet();

    string codeword = "codingcleverly";
    string answer = "______________";
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;

    while (answer != codeword && misses < 7)
    {
        // Clear screen before updating status
        system("CLS");  // For Windows
        // system("clear"); // Uncomment this for Linux/macOS

        display_misses(misses);
        display_status(incorrect, answer);

        cout << "\n\nPlease enter your guess: ";
        cin >> letter;

        // Reset guess before checking letters
        guess = false;

        for (int i = 0; i < codeword.length(); i++)
        {
            if (letter == codeword[i])
            {
                answer[i] = letter;
                guess = true;
            }
        }

        if (guess)
        {
            cout << "\nCorrect!\n";
        }
        else
        {
            cout << "\nIncorrect! Another portion of the person has been drawn.\n";
            incorrect.push_back(letter);
            misses++;
        }
    }

    end_game(answer, codeword);
    return 0;
}
