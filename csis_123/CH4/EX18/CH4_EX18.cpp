//Kernst Douyon

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char gender;

    double bodyWeight;
    double wristMeasurementAtFullestPoint;
    double waistMeasurementAtNavel;
    double hipMeasurementAtFullestPoint;
    double forearmMeasurementAtFullestPoint;
    double waistMeasurementAtFullestPoint;
    double A1, A2, A3, A4, A5;
    double B;
    double bodyFat;
    double bodyFatPercentage;

    cout << "This program determines the body fat of a person." << endl;
    cout << "Enter your gender (f,F/m,M): ";
    cin >> gender;
    cout << endl;

    if (gender == 'F' || gender == 'f')
    {
        cout << "Enter body weight (in pounds): ";
        cin >> bodyWeight;
        cout << endl;
        cout << "Enter wrist measurement at fullest point (in inches): ";
        cin >> wristMeasurementAtFullestPoint;
        cout << endl;
        cout << "Enter waist measurement at navel (in inches): ";
        cin >> waistMeasurementAtNavel;
        cout << endl;
        cout << "Enter hip measurement at fullest point (in inches): ";
        cin >> hipMeasurementAtFullestPoint;
        cout << endl;
        cout << "Enter forearm measurement at fullest point (in inches): ";
        cin >> forearmMeasurementAtFullestPoint;
        cout << endl;

        A1 = bodyWeight * 0.732 + 8.987;
        A2 = wristMeasurementAtFullestPoint / 3.140;
        A3 = waistMeasurementAtNavel * 0.157;
        A4 = hipMeasurementAtFullestPoint * 0.249;
        A5 = forearmMeasurementAtFullestPoint * 0.434;
        B = A1 + A2 - A3 - A4 + A5;
        bodyFat = bodyWeight - B;
        bodyFatPercentage = bodyFat * 100 / bodyWeight;

        cout << "Body fat: " << bodyFat << endl;
        cout << "Body fat percentage: " << bodyFatPercentage << endl;
    }
    else if (gender == 'M' || gender == 'm')
    {
        cout << "Enter body weight (in pounds): ";
        cin >> bodyWeight;
        cout << endl;
        cout << "Enter waist measurement at fullest point (in inches): ";
        cin >> waistMeasurementAtFullestPoint;
        cout << endl;

        A1 = bodyWeight * 1.082 + 94.42;
        A2 = waistMeasurementAtFullestPoint * 4.15;
        B = A1 - A2;
        bodyFat = bodyWeight - B;
        bodyFatPercentage = bodyFat * 100 / bodyWeight;
        cout << "Body fat: " << bodyFat << endl;
        cout << "Body fat percentage: " << bodyFatPercentage << endl;
    }
    else
        cout << "Invalid gender code." << endl;

    return 0;
}