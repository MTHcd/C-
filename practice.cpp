#include <iostream>
using namespace std;

// Arrays
int main() {
    int array[8];
    for(int x=0; x < 8 ; x++)
    cin >> array[x];
    for(int x=0; x < 8; x++)
    cout << array[x] << endl;
    return 0;
}

// Guessing Game

#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
  int number=rand()
  int guess =-1; 
  int trycount = 0;
  while(guess != number && trycount < 8)
    {
      cout << "Please enter a guess: ";
      cin >> guess;
      if (guess_number < number) {
        cout << "Too low" << endl;
      } else if (guess_number > number) {
        cout << "Too high" << endl;
      } else if (guess_number == number) {
        cout << "You guessed the number";
        return 1;
      }
    }
  cout << "Sorry, the number was: " << number;
  return 0;  
}
