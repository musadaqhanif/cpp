1#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
int computer(){
    int x;
    srand(time(0));
    x=rand()%3+1;
    return x;
    }

int userchoice(){
    int user;
    cout << "Enter your choice:\n";
    cout << "1. for Rock\n";
    cout << "2. for Paper\n";
    cout << "3. for Scissors\n";
    cin >> user;    
    return user;

}
void winner(int userChoice ,int computerChoice){
	  cout << "Your choice: ";
    if (userChoice == 1) {
        cout << "Rock\n";
    } else if (userChoice == 2) {
        cout << "Paper\n";
    } else {
        cout << "Scissors\n";
    }
	 
    cout << "Computer's choice: ";
    if (computerChoice == 1) {
        cout << "Rock\n";
    } else if (computerChoice == 2) {
        cout << "Paper\n";
    } else {
        cout << "Scissors\n";
    }

    if (computerChoice == userChoice) {
        cout << "It's a tie!\n";
    } else if ((computerChoice == 1 && userChoice == 3) ||
               (computerChoice == 2 && userChoice == 1) ||
               (computerChoice == 3 && userChoice == 2)) {
        cout << "Computer wins!\n";
    } else {
        cout << "You win!\n";
    }
}
	 
int main(){
char playAgain;

    do {
        int computerChoice = computer();
        int userChoice = userchoice();
        winner(userChoice,computerChoice);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
