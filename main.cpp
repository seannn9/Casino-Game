#include <iostream>
#include <random>
using namespace std;

float betAmount() {
    float bet;
    cout << "Input bet amount: ";
    cin >> bet;
    return bet;
}

int userGuess() {
    int guess;
    cout << "Input guess: ";
    cin >> guess;
    return guess;
}

int main() {
    srand(time(0));
    int randNum = rand()%10 + 1;
    float bet = betAmount();
    do {
        if (userGuess() != randNum) {
            bet -= (bet*0.10);
            cout << bet << endl;
        } else {
            cout << "You guessed it" << endl;
            bet += (bet*1.0);
            break;
        }
    } while (bet > 0);
    cout << bet << endl;
    return 0;
}