#include <iostream>
using namespace std;
void paintexpense(int nrooms, int paintp, int totalfeet)
{
    int r1=0, r2=0, r3=0, r4=0, tcost=0, ngallons=0;
       ngallons = totalfeet / 110;
        r2 += (ngallons * 8);      // hours of labour
        r3 += (paintp * ngallons); // cost of paint
        r4 += (25 * 8 * ngallons); // labour charges
    
    cout << "No of gallons:" << ngallons << "\n";
    cout << "hours of labour required:" << r2 << "\n";
    cout << "Cost of paint:" << r3 << "\n";
    cout << "labour charges:" << r4 << "\n";
    cout << "Total Cost:" << r3 + r4 << "\n";
}

int main()
{
    int nrooms, paintp, walls, space, i, foot,totalfeet=0;
    cout << "Enter no of rooms"
         << "\n";
    cin >> nrooms;
    while (nrooms < 1)
    {
        cout << "Room numbers should not less than 1\n";
        cout << "Enter no of rooms again\n";
        cin >> nrooms;
    }
    int roomsf[nrooms];
    cout << "Enter price of paint per gallon"
         << "\n";
    cin >> paintp;
    while (paintp < 10)
    {
        cout << "price should not less than 10 1\n";
        cout << "Enter paint price per gallon again\n";
        cin >> paintp;
    }

    for (i = 0; i < nrooms; i++)
    {
        cout << "square foot wall for room " << i + 1 << "\n";
        cin >> foot;
           
           roomsf[i] = foot;
            totalfeet+=foot;
    }
    paintexpense(nrooms, paintp,totalfeet);
}