#include <iostream>
#include <iomanip>

using namespace std;

const int NUMBER_OF_COOKIES_IN_BOX = 24;
const int CONTAINER_CAPACITY = 75;

int main()
{
    int numberOfCookies = 0;
    int numberOfBoxes = 0;
    int numberOfContainers = 0;
    int leftoverCookies = 0;
    int leftoverBoxes = 0;

    cout << "Enter the total number of cookies: ";
    cin >> numberOfCookies;
    cout << endl;

    numberOfBoxes = numberOfCookies / NUMBER_OF_COOKIES_IN_BOX;
    cout << "The number of cookie boxes needed to hold the cookies: " 
        << numberOfBoxes << endl;

    leftoverCookies = numberOfCookies % NUMBER_OF_COOKIES_IN_BOX;
        cout << "Leftover cookies: " << leftoverCookies << endl;

    /* what i need next: number of containers to store the cookie boxes: 55
    & leftover boxes: 41 */

    numberOfContainers = numberOfBoxes / CONTAINER_CAPACITY;
    cout << "The number of containers needed to store the cookie boxes: "
        << numberOfContainers << endl;

    leftoverBoxes = numberOfBoxes % CONTAINER_CAPACITY;
    cout << "Leftover boxes: " << leftoverBoxes << endl;

    return 0;
}
