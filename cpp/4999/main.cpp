#include <iostream>
#include <string>

using namespace std;

string A, B;

int main()
{
    cin >> A >> B;

    cout << ((A.size() >= B.size()) ? "go" : "no");

    return 0;
}
