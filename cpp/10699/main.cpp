#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t t = time(NULL);
    tm tm = *localtime(&t);

    tm.tm_hour += 9;

    mktime(&tm);

    cout.width(4);
    cout.fill('0');
    cout << tm.tm_year + 1900 << '-';
    cout.width(2);
    cout << tm.tm_mon + 1 << '-' << tm.tm_mday;

    return 0;
}
