#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

  int main() {
  srand(time(NULL));
  bool isPlaying = true;
  int guess = 0;
  int numGuesses = 0;
  char yesNo = 'a';
  while (isPlaying == true) {
    numGuesses = 0;
    int ans = rand() % 100 + 1;
    cout << "Welcome to Guessing Game!" << endl << "Please input a guess." << endl;
    cin >> guess;
    numGuesses++;
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
    if (yesNo != 'y'){
      isPlaying = false;
      cout << "Thanks for playing!";
    }
}
  return 0;
}
