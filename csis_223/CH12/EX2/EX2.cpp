#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

char examGrade(int score);

int main()
{
char* chPtr1;
int noOfQuestions;
char* chPtr2;
char ID[9];
char ch;
int score;
int len;

ifstream infile;
ofstream outfile;

int i;

infile.open("Ch12_Ex2Data.txt");
if (!infile)
{
cout << "Cannot open input file. Program terminates!" << endl;
return 1;
}

cout << "Enter number of exam questions: ";
cin >> noOfQuestions;
cout << endl;

chPtr1 = new char[noOfQuestions + 1];
chPtr2 = new char[noOfQuestions + 1];

cout << "Processing Data" << endl;

infile.get(chPtr1, noOfQuestions + 1);
cout << "Key: " << chPtr1 << endl;
infile >> ID;
infile.get(ch);
infile.get(chPtr2, noOfQuestions + 1);

while (infile)
{
len = strlen(chPtr2);

for (i = len; i < noOfQuestions; i++)
chPtr2[i] = ' ';
chPtr2[noOfQuestions] = '\0';
score = 0;
for (i = 0; i < noOfQuestions; i++)
    {
        if (chPtr2[i] == chPtr1[i])
            {
                score = score + 2;
            }
        else
        {
            score = score - 1;
        }
    }


cout << ID << " " << chPtr2 << " " << score
<< " " << examGrade(score) << endl;
infile >> ID;
infile.get(ch);
infile.get(chPtr2, noOfQuestions + 1);
}
cout << endl;
infile.close();
return 0;
}

char examGrade(int score)
{
switch (static_cast<int>(score / 40.0 * 10))
{
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
return 'F';
case 6:
return 'D';
case 7:
return 'C';
case 8:
return 'B';
case 9:
case 10:
return 'A';
default:
return 'F';
}
}