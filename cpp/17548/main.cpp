#include <iostream>

using namespace std;

string s;

int main()
{
    cin >> s;

    cout << 'h';

    for(int i = 0; i < (s.size() - 2) * 2; i++) cout << 'e';

    cout << 'y';

    return 0;
}
