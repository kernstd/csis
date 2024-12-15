#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string studentInfo;
    string::size_type pos = 0;
    

    cout << "Enter a student's name, social security number, "
    << "user id, and password in one line: " << endl;

    getline(cin, studentInfo);
    
pos = studentInfo.find('-');

if (pos != string::npos)
{
    string ssninfo = studentInfo.substr(0,pos);
for (string::iterator it = ssninfo.begin(); it!= ssninfo.end(); ++it)
{
    if (isdigit(*it))
    *it = 'x';
}

string ssninfotwo = studentInfo.substr(pos,8);
for (string::iterator it = ssninfotwo.begin(); it!= ssninfotwo.end(); ++it)
{
    if (isdigit(*it))
    *it = 'x';
}

pos = studentInfo.rfind('S');
string userid = studentInfo.substr(pos,8);
if (pos!= string::npos)
{
    
    for (string::iterator it = userid.begin(); it!= userid.end(); ++it)
   {
    *it = *it;
   }
}

pos++;
pos = studentInfo.rfind(' ');
if (pos!= string::npos)
{
    string password = studentInfo.substr(pos);
    for (string::iterator it = password.begin(); it!= password.end(); ++it)
   {
    *it = 'x';
   }

string space = " ";
string modifiedInfo = ssninfo + ssninfotwo + space + userid + space + password;
cout << modifiedInfo << endl;
}

}

return 0;
}
