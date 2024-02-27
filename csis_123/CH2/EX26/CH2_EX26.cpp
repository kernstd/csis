    //CH2_EX26 Extra Credit

#include <iostream>

using namespace std;

const double ONE_GALLON_PAINT_AREA = 120.00;

int main()
{
    double doorLength;
    double doorWidth;
    double window1Length;
    double window1Width;
    double window2Length;
    double window2Width;
    double bookShelfLength;
    double bookShelfWidth;
    double roomLength;
    double roomWidth;
    double roomHeight;
    double paintArea;
    double amountOfPaintNeeded;

    cout << "Enter the length and width of the door: ";
    cin >> doorLength >> doorWidth;
    cout << endl;
    cout << "Enter the length and width of the first window: ";
    cin >> window1Length >> window1Width;
    cout << endl;
    cout << "Enter the length and width of second window: ";
    cin >> window2Length >> window2Width;
    cout << endl;
    cout << "Enter the length and width of the bookshelf: ";
    cin >> bookShelfLength >> bookShelfWidth;
    cout << endl;
    cout << "Enter the length, width, and height of the room: ";
    cin >> roomLength >> roomWidth >> roomHeight;
    cout << endl;

    paintArea = 2 * roomLength * roomHeight + 2 * roomWidth * roomHeight
    - doorLength * doorWidth - window1Length * window1Width
    - window2Length * window2Width - bookShelfLength * bookShelfWidth;

    amountOfPaintNeeded = paintArea / ONE_GALLON_PAINT_AREA;

    cout << "The amount of paint needed to paint the room: "
    << amountOfPaintNeeded << " gallons." << endl;

   /* system("pause"); 
   pause is a windows command, doesn't work on macs terminal */ 

    return 0;
}