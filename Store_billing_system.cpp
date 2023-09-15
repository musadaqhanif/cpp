#include <iostream>
using namespace std;

struct Drink {
    string name;
    double cost;
    int quantity;
};

const int NUM_DRINKS = 5;

void displayDrinks(const Drink drinks[]) {
    cout << "Available drinks:\n";
    for (int i = 0; i < NUM_DRINKS; i++) {
        cout << i + 1 << ". " << drinks[i].name << " ($" << drinks[i].cost << ") - " << drinks[i].quantity << " no of drinks\n";
    }
    cout << "0. Quit\n";
}

int main() {
    Drink drinks[NUM_DRINKS] = {
        {"Cola", 0.75, 20},
        {"Root Beer", 0.75, 20},
        {"Lemon-Lime", 0.75, 20},
        {"Grape Soda", 0.80, 20},
        {"Cream Soda", 0.80, 20}
    };

    double totalMoneyEarned = 0.0;

    while (1) {
        displayDrinks(drinks);

        int choice;
        cout << "\nEnter your choice (0 to quit): ";
        cin >> choice;

        if (choice == 0) {
            break;
        } else if (choice < 0 || choice > NUM_DRINKS) {
            cout << "Invalid choice. Try again.\n";
            continue;
        }

        int index = choice - 1;
        Drink selectedDrink = drinks[index];

        if (selectedDrink.quantity == 0) {
            cout << "Sorry, " << selectedDrink.name << " is sold out.\n";
            continue;
        }

        double amount;
        cout << "Insert money ($1.00 maximum): ";
        cin >> amount;

        if (amount < 0.0 || amount > 1.0) {
            cout << "Invalid amount. Try again.\n";
            continue;
        }

        if (amount < selectedDrink.cost) {
            cout << "Insufficient amount. Please insert at least $" << selectedDrink.cost << ".\n";
            continue;
        }

        double change = amount - selectedDrink.cost;
        cout << "Change: $" << change << endl;
        totalMoneyEarned += selectedDrink.cost;
        drinks[index].quantity--;
    }
    cout << "Total money earned: $" << totalMoneyEarned << endl;
    return 0;
}
