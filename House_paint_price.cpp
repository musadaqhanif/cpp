#include <iostream>
using namespace std;

void calculatePaintExpense(int nrooms, double paintPrice, int wallSpace[]) {
    const int gallonCoverage = 110;
    const double laborRate = 25.0;

    int totalGallons = 0;
    int totalLaborHours = 0;
    double totalPaintCost = 0.0;
    double totalLaborCharges = 0.0;

    for (int i = 0; i < nrooms; i++) {
        int roomGallons = wallSpace[i] / gallonCoverage;
        int roomLaborHours = roomGallons * 8;
        double roomPaintCost = paintPrice * roomGallons;
        double roomLaborCharges = laborRate * roomLaborHours;

        totalGallons += roomGallons;
        totalLaborHours += roomLaborHours;
        totalPaintCost += roomPaintCost;
        totalLaborCharges += roomLaborCharges;
    }

    double totalCost = totalPaintCost + totalLaborCharges;

    cout << "Number of gallons of paint required: " << totalGallons << "\n";
    cout << "Hours of labor required: " << totalLaborHours << "\n";
    cout << "Cost of the paint: $" << totalPaintCost << "\n";
    cout << "Labor charges: $" << totalLaborCharges << "\n";
    cout << "Total cost of the paint job: $" << totalCost << "\n";
}

int main() {
    int numRooms;

    cout << "Enter the number of rooms to be painted: ";
    cin >> numRooms;

    while (numRooms < 1) {
        cout << "Number of rooms should be greater than or equal to 1. Please try again: ";
        cin >> numRooms;
    }

    double paintPrice;

    cout << "Enter the price of paint per gallon: $";
    cin >> paintPrice;

    while (paintPrice < 10.0) {
        cout << "Price of paint should be greater than or equal to $10.00. Please try again: $";
        cin >> paintPrice;
    }

    int wallSpace[numRooms];

    for (int i = 0; i < numRooms; i++) {
        cout << "Enter the square footage of wall space for room " << (i + 1) << ": ";
        cin >> wallSpace[i];
    }

    calculatePaintExpense(numRooms, paintPrice, wallSpace);

    return 0;
}
