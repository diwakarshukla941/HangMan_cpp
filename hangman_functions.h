#include <iostream>
#include <vector>
#include <string>  // Add this to avoid issues with std::string

using namespace std;

// Function declarations
void greet();
void display_misses(int misses);
void display_status(vector<char> incorrect, string answer);
void end_game(string answer, string codeword);
