#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t t;
    t = time(NULL);

    struct tm* tm;
    tm = localtime(&t);

    tm -> tm_year += 1900;
    tm -> tm_mon += 1;
    tm -> tm_hour -= 9;

    cout << tm -> tm_year << '\n';
    cout.fill('0');
    cout.width(2);
    cout << tm -> tm_mon << '\n';
    cout << tm -> tm_mday;

    return 0;
}
