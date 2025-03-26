#include <iostream>
#include <string>

using namespace std;

int A, B, C;

string s;
int r = 0;

int main()
{
    cin >> A >> B >> C;

    cout << A + B - C << endl;
    cout << stoi(to_string(A).append(to_string(B))) - C;

    return 0;
}
