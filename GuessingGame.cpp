#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Guessing Game by Kevin Jin
//A game about guessing numbers
using namespace std;
//Main method which runs everything
  int main() {
  srand(time(NULL));
  bool isPlaying = true;
  int guess = 0;
  int numGuesses = 0;
  char yesNo = 'a';
  //While the user still wants to play...
  while (isPlaying == true) {
    numGuesses = 0;
    //Generates a new number
    int ans = rand() % 100 + 1;
    cout << "Welcome to Guessing Game!" << endl << "Please input a guess." << endl;
    cin >> guess;
    numGuesses++;
    //While the answer is wrong...
    while (guess != ans) {
      if (guess > ans)
	cout << "Too high!" << endl;
      else
	cout << "Too low!" << endl;
      cin >> guess;
      numGuesses++;
    }
    cout << "Congrats, you win!" << endl << "You used " << numGuesses << " guesses." << endl << "Play again? (y, n)" << endl;
    cin >> yesNo;
    //If character read in isn't y, end the game
    if (yesNo != 'y'){
      isPlaying = false;
      cout << "Thanks for playing!";
    }
}
  return 0;
}
