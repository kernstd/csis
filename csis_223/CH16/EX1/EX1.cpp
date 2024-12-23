#include <iostream>

using namespace std;

const int ARRAY_SIZE = 10;

int seqOrderedSearch(const int list[], int listLength, int searchItem);

void bubbleSort(int list[], int length);

int main()
{
    int intList[ARRAY_SIZE];
    int number;
    int index;

    cout << "Enter " << ARRAY_SIZE << " integers." << endl;

    for (index = 0; index < ARRAY_SIZE; index++)
    cin >> intList[index];

    cout << endl;

    //sort the list
    bubbleSort(intList, ARRAY_SIZE);

    cout << "Enter the number to be searched: ";
    cin >> number;
    cout << endl;

    index = seqOrderedSearch(intList, ARRAY_SIZE, number);

    if (index != -1)
        cout << number << " is found at position " << index
        << endl;
    else
        cout << number << " is not in the list." << endl;
    return 0;
}

int seqOrderedSearch(const int list[], int listLength, int searchItem)
{
    int loc;
    bool found = false;

    for (loc = 0; loc < listLength; loc++)
        if (list[loc] >= searchItem)
        {
            found = true;
            break;
        }

    if (found)
        if (list[loc] == searchItem)
            return loc;
        else
            return -1;
    else
        return -1;
}

void bubbleSort(int list[], int length)
{
    int temp;

    for (int i = 1; i < length; i++)
    {
        for (int index = 0; index < length - i; index++)
            if (list[index] > list[index + 1])
            {
                temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;
            }
    }


}