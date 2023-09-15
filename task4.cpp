#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int getNumberOfDays() {
    int numberOfDays;
    cout << "Enter the total number of days spent on the trip: ";
    cin >> numberOfDays;
    while (numberOfDays < 1) {
        cout << "The number of days must be greater than 0.\n";
        cout << "Enter the total number of days spent on the trip: ";
        cin >> numberOfDays;
    }
    return numberOfDays;
}

int getTimeOfDeparture() {
    int departureTime;
    cout << "Enter the time of departure on the first day of the trip (24-hour format): ";
    cin >> departureTime;
    return departureTime;
}

int getTimeOfArrival() {
    int arrivalTime;
    cout << "Enter the time of arrival back home on the last day of the trip (24-hour format): ";
    cin >> arrivalTime;
    return arrivalTime;
}

double getAirfare() {
    double airfare;
    cout << "Enter the amount of round-trip airfare: $";
    cin >> airfare;
    while (airfare < 0) {
        cout << "The amount of airfare must be greater than or equal to $0.\n";
        cout << "Enter the amount of round-trip airfare: $";
        cin >> airfare;
    }
    return airfare;
}

double getCarRental() {
    double carRental;
    cout << "Enter the amount of car rental: $";
    cin >> carRental;
    while (carRental < 0) {
        cout << "The amount of car rental must be greater than or equal to $0.\n";
        cout << "Enter the amount of car rental: $";
        cin >> carRental;
    }
    return carRental;
}

int getMilesDriven() {
    int milesDriven;
    cout << "Enter the number of miles driven in a private vehicle: ";
    cin >> milesDriven;
    while (milesDriven < 0) {
        cout << "The number of miles driven must be greater than or equal to 0.\n";
        cout << "Enter the number of miles driven in a private vehicle: ";
        cin >> milesDriven;
    }
    return milesDriven;
}

double getParkingFees() {
    double parkingFees;
    cout << "Enter the parking fees: $";
    cin >> parkingFees;
    while (parkingFees < 0) {
        cout << "The parking fees must be greater than or equal to $0.\n";
        cout << "Enter the parking fees: $";
        cin >> parkingFees;
    }
    return parkingFees;
}

double getTaxiFees() {
    double taxiFees;
    cout << "Enter the taxi fees: $";
    cin >> taxiFees;
    while (taxiFees < 0) {
        cout << "The taxi fees must be greater than or equal to $0.\n";
        cout << "Enter the taxi fees: $";
        cin >> taxiFees;
    }
    return taxiFees;
}

double getRegistrationFees() {
    double registrationFees;
    cout << "Enter the conference or seminar registration fees: $";
    cin >> registrationFees;
    while (registrationFees < 0) {
        cout << "The conference or seminar registration fees must be greater than or equal to $0.\n";
        cout << "Enter the conference or seminar registration fees: $";
        cin >> registrationFees;
    }
    return registrationFees;
}

double getHotelExpenses() {
    double hotelExpenses;
    cout << "Enter the hotel expenses: $";
    cin >> hotelExpenses;
    while (hotelExpenses < 0) {
        cout << "The hotel expenses must be greater than or equal to $0.\n";
        cout << "Enter the hotel expenses: $";
        cin >> hotelExpenses;
    }
    return hotelExpenses;
}

double getMealAmount() {
    double mealAmount;
    cout << "Enter the total amount of the meals: $";
    cin >> mealAmount;
    while (mealAmount < 0) {
        cout << "The amount of the meal must be greater than or equal to $0.\n";
        cout << "Enter the amount of the meal: $";
        cin >> mealAmount;
    }
    return mealAmount;
}

int main() {
    int numberOfDays = getNumberOfDays();
    int departureTime = getTimeOfDeparture();
    int arrivalTime = getTimeOfArrival();
    double airfare = getAirfare();
    double carRental = getCarRental();
    int milesDriven = getMilesDriven();
    double parkingFees = getParkingFees();
    double taxiFees = getTaxiFees();
    double registrationFees = getRegistrationFees();
    double hotelExpenses = getHotelExpenses();
    double mealAmount=getMealAmount();
    
    double vehicleExpenses = 0.27 * milesDriven;
    
    double allowableExpenses = 0;
    allowableExpenses += 6 * numberOfDays; // Parking fees
    allowableExpenses += 10 * numberOfDays; // Taxi fees
    allowableExpenses += 90 * numberOfDays; // Hotel expenses
    allowableExpenses += (12+16+9)*numberOfDays; // meal expenses
    
    
   
    double totalExpenses = airfare + carRental + vehicleExpenses + parkingFees + taxiFees + registrationFees + hotelExpenses;
    
    
     double excessAmount = 0;
     if(totalExpenses>allowableExpenses){
      excessAmount=totalExpenses - allowableExpenses;
     }
     else{
         excessAmount = 0;
     }
     double amountSaved;
       if(totalExpenses<allowableExpenses)
    double amountSaved = allowableExpenses- totalExpenses;
      else
       amountSaved=0;
   // cout << fixed << setprecision(2);
    cout << "\nTotal Expenses: $" << totalExpenses ;
    cout << "\nAllowable Expenses: $" << allowableExpenses ;
    cout << "\nExcess Amount: $" << excessAmount ;
    cout << "\nAmount Saved: $" << amountSaved ;
    
    return 0;
}
