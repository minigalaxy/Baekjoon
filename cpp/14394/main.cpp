#include <iostream>
#include <string>

using namespace std;

string a, b;

int col_a[4] = { 0, }, col_b[4] = { 0, };

int res = 0;

int main()
{
    cin >> a >> b;

    for(int i = 0; i < a.size(); i++){
        if(a[i] == 'R') col_a[0]++;
        else if(a[i] == 'G') col_a[1]++;
        else if(a[i] == 'B') col_a[2]++;
        else if(a[i] == 'Y') col_a[3]++;

        if(b[i] == 'R') col_b[0]++;
        else if(b[i] == 'G') col_b[1]++;
        else if(b[i] == 'B') col_b[2]++;
        else if(b[i] == 'Y') col_b[3]++;
    }

    for(int i = 0; i < 4; i++){
        res += abs(col_a[i] - col_b[i]);
    }

    cout << res / 2;

    return 0;
}
