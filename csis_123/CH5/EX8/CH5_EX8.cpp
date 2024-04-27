#include <iostream>
#include <iomanip>
#include <limits>


int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int firstNum = 0, secondNum = 0;
    int sumEven = 0;
    int sumSquareOdd = 0;
    
    char chCounter;
    int counter = 1;

    //Part A (prompt user to input two integers)

    cout << "Enter two integers." << endl;
    cout << "First integer must be less than the second integer." << endl;
    cout << "Enter integers: " << std::flush;
    cin >> firstNum >> secondNum;

    bool validInput = false;  // checking if input is an integer + first number < second number
    while (!validInput)
    {
        if (!cin)
        {
            cout << "Incorrect input! Please enter two integers:"; 
            cin.clear(); //get rid of the error
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore the rest of the line
            cin >> firstNum >> secondNum;
        }
        else if (firstNum >= secondNum)
        {
            cout << "First integer must be less than the second integer." << endl;
            cout << "Enter integers:" << std::flush;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cin >> firstNum >> secondNum;
        }
        else
        {
            validInput = true;
        }
    }
    cout << endl;

    //Part B (output all odd numbers between firstNum and secondNum)
    
    cout << "Odd integers between " << firstNum << " and " << secondNum << ": \n";

    int i = firstNum;
    int j = 1; // number to be added to first number if it's even to make it odd
    bool oddNumCond = false;
    while (!oddNumCond)
    {
        if (i % 2 != 0 && secondNum % 2 != 0 && i != (secondNum - 2)) // if both numbers are odd
        {
            cout << i + 2 << " " << std::flush;
            i += 2;
        }
        else if (i % 2 == 0 && secondNum % 2 == 0 && i !=(secondNum)) // if both numbers are even
        {
            cout << firstNum + j << " " << std::flush;
            j += 2;
            i += 2;
        }
        else if (i % 2 == 0 && secondNum % 2 != 0 && i !=(secondNum - 1)) // if firstNum is even & secondNum is odd
        {
            cout << firstNum + j << " " << std::flush;
            j += 2;
            i += 2;
        }
        else if (i % 2 != 0 && secondNum % 2 == 0 && i !=(secondNum - 1)) // if firstNum is odd & secondNum is even
        {
            cout << i + 2 << " " << std::flush;
            i += 2;
        }
        else if (secondNum - firstNum == 1 || (firstNum % 2 != 0 && secondNum % 2 != 0 && secondNum - firstNum == 2)) //cases where there are no odd numbers in between two numbers
        {
            cout << "Does Not Exist.";
            break;
        }
        else
        {
            oddNumCond = true;
        }
    }

    cout << "\n \n";

    //Part C (output the sum of all even numbers between firstNum and secondNum)
   
    cout << "Sum of even integers between " << firstNum << " and " << secondNum << ": \n";

    int k = firstNum + 2; // to find the next even number after the first number as well as a loop condition
    int l = firstNum + 1; // same purpose as k
    bool evenNumCond = false;
    while (!evenNumCond)
    {
        if (k % 2 != 0 && secondNum % 2 != 0 && k != (secondNum + 2)) // if both numbers are odd
        {
            sumEven += l;
            
            l += 2;
            k += 2;
        }
        else if (k % 2 == 0 && secondNum % 2 == 0 && k !=(secondNum)) // if both numbers are even
        {
            sumEven += k;
            k+= 2;
        }
        else if (k % 2 == 0 && secondNum % 2 != 0 && k !=(secondNum + 1)) // if firstNum is even and secondNum is odd
        {
            sumEven += k;
            k+= 2;
        }
        else if (k % 2 != 0 && secondNum % 2 == 0 && k !=(secondNum + 1)) // if firstNum is odd and secondNum is even
        {
            sumEven += l;
            l += 2;
            k += 2;
        }
        else if (secondNum - firstNum == 1 || (secondNum % 2 == 0 && firstNum % 2 == 0 && secondNum-firstNum == 2)) // cases when there are no even integers between two numbers
        {
            cout << "Does Not Exist. \n \n";
            break;
        }
        else 
        {
            evenNumCond = true;
        }
    } 
    if (sumEven)
    {
        cout << sumEven << "\n \n";
    }

    //Part D (output the numbers and their squares between 1 and 10)

    cout << "Perfect squares from 1-10: \n \n";
    cout << std::left << std::setw(12) << "Number" << std::setw(12) << "Square of Number \n";

    while (counter <= 10)
    {
        cout << std::right << std::setw(4) << counter << std::right << std::setw(20) << counter * counter << "\n";
        counter++;
    }
    
    cout << "\n";
    
    //Part E (output the sum of the squares of the odd numbers between firstNum and secondNum)

    cout << "Sum of the squares of odd integers between " << firstNum << " and " << secondNum << ": \n";
    int m = firstNum + 2; //to find the first odd number as well as a loop condition
    int n = firstNum + 1; //same purpose as n
    bool sumSquareCond = false;
    while (!sumSquareCond)
    {
        if (m % 2 != 0 && secondNum % 2 != 0 && m != (secondNum)) // if both numbers are odd
        {
            sumSquareOdd = sumSquareOdd + (m * m);
            m += 2;
        }
        else if (m % 2 == 0 && secondNum % 2 == 0 && m !=(secondNum + 2)) // if both numbers are even
        {
            sumSquareOdd = sumSquareOdd + (n * n);
            n += 2;
            m += 2;
        }
        else if (m % 2 == 0 && secondNum % 2 != 0 && m !=(secondNum + 1)) // if firstNum is even & secondNum is odd
        {
           sumSquareOdd = sumSquareOdd + (n * n);
            n += 2;
            m += 2;
        }
        else if (m % 2 != 0 && secondNum % 2 == 0 && m !=(secondNum + 1)) // if firstNum is odd & secondNum is even
        {
            sumSquareOdd = sumSquareOdd + (m * m);
            m += 2;
        }
        else if (secondNum - firstNum == 1 || (firstNum % 2 != 0 && secondNum % 2 != 0 && secondNum - firstNum == 2)) // cases when there are no odd integers in between numbers
        {
            cout << "Does Not Exist. \n";
            break;
        }
        else 
        {
            sumSquareCond = true;
        }
    }
    if (sumSquareOdd)
    {
        cout << sumSquareOdd << "\n";
    }
    
    cout << "\n";

    //Part F (output all uppercase letters)

    cout << "Upper case letters are: ";

    chCounter = 'A';
    while (chCounter <= 'Z')
    {
        cout << chCounter << " ";
        chCounter++;
    }
    cout << endl;

    return 0;
}