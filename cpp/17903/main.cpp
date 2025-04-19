#include <iostream>

using namespace std;

int m, n;

int x[20];

int main()
{
    cin >> m >> n;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) cin >> x[j];
    }

    cout << ((m >= 8) ? "satisfactory" : "unsatisfactory");

    return 0;
}
