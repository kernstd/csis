#include <iostream>


using namespace std;

void printStars(int lines);

int main()
{
    int lines;
    cout << "Enter the number of lines in the grid: ";
    cin >> lines;
    cout << endl;
    printStars(lines);
    cout << endl;
    return 0;
}

void printStars(int lines)
{
    
    if (lines == 0) return;
    else
    {
        for (int i = 1; i <= lines; i++)
        {
            cout << '*';
        }
        cout << endl;
    printStars(lines - 1);
        for (int i = 1; i <= lines; i++)
        {
            cout << '*';
        }
        cout << endl;
    }
}


