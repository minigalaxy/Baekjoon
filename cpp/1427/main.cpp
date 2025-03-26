#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string N;

int main()
{
    cin >> N;

    sort(N.begin(), N.end(), greater<char>());

    cout << N;

    return 0;
}
