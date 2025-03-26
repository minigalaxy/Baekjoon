#include <iostream>

using namespace std;

double H, P;

int main()
{
    cout << fixed;
    cout.precision(2);

    while(cin >> H >> P){
        cout << H / P << '\n';
    }
    return 0;
}
