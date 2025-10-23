#include <iostream>

using namespace std;

int A, B, C;

int res = 0;

int main()
{
    cin >> A >> B >> C;

    if(B >= C){
        cout << -1;

        return 0;
    }

    cout << A / (C - B) + 1;

    return 0;
}
