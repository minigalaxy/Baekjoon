#include <iostream>

using namespace std;

int s;

int main()
{
    cin >> s;

    if(s >= 90) cout << 'A';
    else if(s >= 80) cout << 'B';
    else if(s >= 70) cout << 'C';
    else if(s >= 60) cout << 'D';
    else cout << 'F';

    return 0;
}
