#include <iostream>
#include <iomanip>
using namespace std;
// Function to get the number of days spent on the trip
int getNumberOfDays() {
    int numberOfDays;
    cout << "Enter the number of days spent on the trip: ";
    cin >> numberOfDays;
    // Validate the number of days
    while (numberOfDays < 1) {
        cout << "The number of days must be greater than or equal to 1.\n";
        cout << "Enter the number of days spent on the trip: ";
        cin >> numberOfDays;
    }
    return numberOfDays;
}
// Function to get the time of departure on the first day of the trip
int getTimeOfDeparture() {
    int timeOfDeparture;
    cout << "Enter the time of departure on the first day of the trip (24-hour format): ";
    cin >> timeOfDeparture;
    // Validate the time of departure
    while (timeOfDeparture < 0 || timeOfDeparture > 24) {
        cout << "The time of departure must be between 0 and 24.\n";
        cout << "Enter the time of departure on the first day of the trip (24-hour format): ";
        cin >> timeOfDeparture;
    }
    return timeOfDeparture;
}
// Function to get the time of arrival back home on the last day of the trip
int getTimeOfArrival() {
    int timeOfArrival;
    cout << "Enter the time of arrival back home on the last day of the trip (24-hour format): ";
    cin >> timeOfArrival;
    // Validate the time of arrival
    while (timeOfArrival < 0 || timeOfArrival > 24) {
        cout << "The time of arrival must be between 0 and 24.\n";
        cout << "Enter the time of arrival back home on the last day of the trip (24-hour format): ";
        cin >> timeOfArrival;
    }
    return timeOfArrival;
}
// Function to get the amount of round-trip airfare
double getAirfare() {
    double airfare;
    cout << "Enter the amount of round-trip airfare: ";
    cin >> airfare;
    // Validate the airfare
    while (airfare < 0) {
        cout << "The airfare must be greater than or equal to 0.\n";
        cout << "Enter the amount of round-trip airfare: ";
        cin >> airfare;
    }
    return airfare;
}
// Function to get the amount of car rental
double getCarRental() {
    double carRental;
    cout << "Enter the amount of car rental: ";
    cin >> carRental;
    // Validate the car rental
    while (carRental < 0) {
        cout << "The car rental must be greater than or equal to 0.\n";
        cout << "Enter the amount of car rental: ";
        cin >> carRental;
    }
    return carRental;
}
// Function to get the number of miles driven in a private vehicle
int getMilesDriven() {
    int milesDriven;
    cout << "Enter the number of miles driven in a private vehicle: ";
    cin >> milesDriven;
    // Validate the number of miles driven
    while (milesDriven < 0) {
        cout << "The number of miles driven must be greater than or equal to 0.\n";
        cout << "Enter the number of miles driven in a private vehicle: ";
        cin >> milesDriven;
    }
    return milesDriven;
}
// Function to get the parking fees
double getParkingFees() {
    double parkingFees;
    cout << "Enter the parking fees: ";
    cin >> parkingFees;
    // Validate the parking fees
    while (parkingFees < 0) {
        cout << "The parking fees must be greater than or equal to 0.\n";
        cout << "Enter the parking fees: ";
        cin >> parkingFees;
    }
    return parkingFees;
}
// Function to get the taxi fees
double getTaxiFees() {
    double taxiFees;
    cout << "Enter the taxi fees: ";
    cin >> taxiFees;
    // Validate the taxi fees
    while (taxiFees < 0) {
        cout << "The taxi fees must be greater than or equal to 0.\n";
        cout << "Enter the taxi fees: ";
        cin >> taxiFees;
    }
    return taxiFees;
}
// Function to get the conference or seminar registration fees
double getConferenceRegistrationFees() {
    double conferenceRegistrationFees;
    cout << "Enter the conference or seminar registration fees: ";
    cin >> conferenceRegistrationFees;
    // Validate the conference registration fees
    while (conferenceRegistrationFees < 0) {
        cout << "The conference registration fees must be greater than or equal to 0.\n";
        cout << "Enter the conference or seminar registration fees: ";
        cin >> conferenceRegistrationFees;
    }
    return conferenceRegistrationFees;
}
// Function to get the hotel expenses
double getHotelExpenses() {
    double hotelExpenses;
    cout << "Enter the hotel expenses: ";
    cin >> hotelExpenses;
    // Validate the hotel expenses
    while (hotelExpenses < 0) {
        cout << "The hotel expenses must be greater than or equal to 0.\n";
        cout << "Enter the hotel expenses: ";
        cin >> hotelExpenses;
    }
    return hotelExpenses;
}
// Function to get the amount of each meal eaten
double getMealAmount(int mealType) {
    double mealAmount;
    cout << "Enter the amount of the " << mealType << " meal: ";
    cin >> mealAmount;
    // Validate the meal amount
    while (mealAmount < 0) {
        cout << "The meal amount must be greater than or equal to 0.\n";
        cout << "Enter the amount of the " << mealType << " meal: ";
        cin >> mealAmount;
    }
    return mealAmount;
}
// Function to calculate the total expenses incurred by the employee
double calculateTotalExpenses() {
    // Get the number of days spent on the trip
    int numberOfDays = getNumberOfDays();
    // Get the time of departure on the first day of the trip
    int timeOfDeparture = getTimeOfDeparture();
    // Get the time of arrival back home on the last day of the trip
    int timeOfArrival = getTimeOfArrival();
    // Get the amount of round-trip airfare
    double airfare = getAirfare();
    // Get the amount of car rental
    double carRental = getCarRental();
    // Get the number of miles driven in a private vehicle
    int milesDriven = getMilesDriven();
    // Get the parking fees
    double parkingFees = getParkingFees();
    // Get the taxi fees
    double taxiFees = getTaxiFees();
    // Get the conference or seminar registration fees
    double conferenceRegistrationFees = getConferenceRegistrationFees();
    // Get the hotel expenses
    double hotelExpenses = getHotelExpenses();
    // Get the amount of each meal eaten
    double breakfastAmount = getMealAmount(1);
    double lunchAmount = getMealAmount(2);
    double dinnerAmount = getMealAmount(3);
    // Calculate the total expenses incurred by the employee
    double totalExpenses = airfare + carRental + (milesDriven * 0.27) + parkingFees + taxiFees + conferenceRegistrationFees + hotelExpenses + breakfastAmount + lunchAmount + dinnerAmount;
    return totalExpenses;
}
// Function to calculate the total allowable expenses for the trip
double calculateTotalAllowableExpenses() {
    // Get the number of days spent on the trip
    int numberOfDays = getNumberOfDays();
    // Calculate the total allowable expenses for the trip
    double totalAllowableExpenses = 90 * numberOfDays + 6 * numberOfDays + 10 * numberOfDays + 9 + 12 + 16;
    return totalAllowableExpenses;
}
// Function to calculate the excess amount (This amount mustbe reimbursed by the businessperson)
double calculateExcessAmount() {
    // Get the total expenses incurred by the employee
    double totalExpenses = calculateTotalExpenses();
    // Get the total allowable expenses for the trip
    double totalAllowableExpenses = calculateTotalAllowableExpenses();
    // Calculate the excess amount
    double excessAmount = totalExpenses - totalAllowableExpenses;
    return excessAmount;
}
// Function to calculate the amount saved by the businessperson if the expenses were under the total allowed
double calculateAmountSaved() {
    // Get the total expenses incurred by the employee
    double totalExpenses = calculateTotalExpenses();
    // Get the total allowable expenses for the trip
    double totalAllowableExpenses = calculateTotalAllowableExpenses();
    // Calculate the amount saved by the businessperson
    double amountSaved = totalAllowableExpenses - totalExpenses;
    return amountSaved;
}
int main() {
    // Get the total expenses incurred by the employee
    double totalExpenses = calculateTotalExpenses();
    // Get the total allowable expenses for the trip
    double totalAllowableExpenses = calculateTotalAllowableExpenses();
    // Calculate the excess amount (This amount must be reimbursed by the businessperson)
    double excessAmount = calculateExcessAmount();
    // Calculate the amount saved by the businessperson if the expenses were under the total allowed
    double amountSaved = calculateAmountSaved();
    // Display the total expenses incurred by the employee
    cout << "The total expenses incurred by the employee are: $" << totalExpenses << endl;
    // Display the total allowable expenses for the trip
    cout << "The total allowable expenses for the trip are: $" << totalAllowableExpenses << endl;
    // Display the excess amount (This amount must be reimbursed by the businessperson)
    cout << "The excess amount is: $" << excessAmount << endl;
    // Display the amount saved by the businessperson if the expenses were under the total allowed
    cout << "The amount saved by the businessperson is: $" << amountSaved << endl;
    return 0;
}