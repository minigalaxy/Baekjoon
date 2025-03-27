#include <iostream>
#include <string>

using namespace std;

string s;

int main()
{
    cin >> s;
    
    if(s == "SONGDO") cout << "HIGHSCHOOL";
    else if(s == "CODE") cout << "MASTER";
    else if(s == "2023") cout << "0611";
    else cout << "CONTEST";
    
    return 0;
}
