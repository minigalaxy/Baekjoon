#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n[3];
vector<bool> r;

int main()
{
    while(true){
        cin >> n[0] >> n[1] >> n[2];

        if(n[0] + n[1] + n[2] == 0) break;

        sort(n, n + 3);

        r.push_back(n[0] * n[0] + n[1] * n[1] == n[2] * n[2]);
    }

    for(bool t: r) cout << ((t) ? "right" : "wrong") << endl;

    return 0;
}
