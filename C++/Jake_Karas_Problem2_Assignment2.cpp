#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0)); //Seed random number generation, and then get two random nubmers between 1 and 6. Then add them.
  int dice1 = rand() % 6 + 1;
  int dice2 = rand() % 6 + 1;
  int point = dice1 + dice2;
  cout << "You rolled " << dice1 << " + " << dice2 << " = " << point << endl;
  if (point == 2 || point == 3 || point == 12) {  //If the number is a "crap", it's game over!
    cout << "You lose!" << endl;
  }
  else if (point == 7 || point == 11) { //If the number is a "natural", the game has been won.
    cout << "You win!" << endl;
  }
  else {  //Otherwise, continue to the point section of the game.
    cout << "Point is " << point << endl;
    int sum = 0;
    while (sum != 7 && sum != point) {  //Roll until the game is either won or lost.
      dice1 = rand() % 6 + 1; //Roll 2 numbers in the same manner as before and add them.
      dice2 = rand() % 6 + 1;
      sum = dice1 + dice2;
      cout << "You rolled " << dice1 << " + " << dice2 << " = " << sum << endl;
      if (sum == 7) { //If the new sum is 7, it's game over!
        cout << "You lose!" << endl;
      }
      else if (sum == point) {  //If it's the same as the original sum, the game is won.
        cout << "You win!" << endl;
      } //Otherwise, reroll again.
    }
  }
}