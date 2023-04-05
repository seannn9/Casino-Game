#include <iostream>
#include <random>
using namespace std;

float betAmount() {
    float bet;
    cout << "Input bet amount: ";
    cin >> bet;
    return bet;
}

void guess(float bet) {
    while (bet > 0) {
        srand(time(0));
        randNum = rand() % 10 + 1;
    }
}

int main() {
    float bet = betAmount();
    guess(bet);
    return 0;
}