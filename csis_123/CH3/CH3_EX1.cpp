/* CH3_EX1.cpp : This file contains the 'main' function.
Program execution begins and ends there.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    string firstName, lastName, department;
    double grossSalary, bonus, taxRate;
    double distancedTraveled, travelTime;
    int nummOfCoffeeCupSold;
    double coffeeCupCost;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    if (!inFile)
    {
        cout << endl << "Error opening input file inData.txt." << endl;
        return -1;
    }

    outFile << fixed << showpoint << setprecision(2);

    inFile >> firstName >> lastName >> department;

    outFile << "Name: " << firstName << " " << lastName << ", "
        << "Department: " << department << endl;

    inFile >> grossSalary >> bonus >> taxRate;

    outFile << "Monthly Gross Salary: $" << grossSalary
        << ", Monthly Bonus: " << bonus << "%, Taxes: "
        << taxRate << "%" << endl
        << "Paycheck: $"
        << grossSalary * (1 + bonus / 100) * (1 - taxRate / 100)
        << endl << endl;

    inFile >> distancedTraveled >> travelTime;
    outFile << "Distance Traveled: " << distancedTraveled
        << " miles, Traveling Time: " << 9.00 << " hours" << endl;
    outFile << "Average Speed: " << distancedTraveled / travelTime
        << " miles per hour" << endl << endl;
    inFile >> nummOfCoffeeCupSold >> coffeeCupCost;
    outFile << "Number of Coffee Cups Sold: " << nummOfCoffeeCupSold
        << ", Cost: $" << coffeeCupCost << " per cup" << endl;
    outFile << "Sales Amount = $" << nummOfCoffeeCupSold * coffeeCupCost
    << endl;

    inFile.close();
    outFile.close();
    return 0;
}
