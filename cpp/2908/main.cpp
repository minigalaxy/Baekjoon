#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string A, B;

int main()
{
    cin >> A >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    cout << max(A, B);

    return 0;
}
