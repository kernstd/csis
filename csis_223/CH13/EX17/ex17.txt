#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main()
{
    random_device rdevice{};
    default_random_engine num{rdevice()};
    uniform_real_distribution<double> randomNum{10,100};
   
    for (double count = 1; count <=25; count++)
        cout << fixed << setprecision(2) << randomNum(num) << " ";
    cout << endl;


    return 0;
}
