#include <iostream>
#include <cmath>

using namespace std;

double A, B, V;
int r;

int main()
{
    cin >> A >> B >> V;

    if(A >= V) r = 1;

    r = ceil((V - A) / (A - B)) + 1;

    cout << r;

    return 0;
}
