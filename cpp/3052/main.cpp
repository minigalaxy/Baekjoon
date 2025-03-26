#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> n;

int main()
{
    for(int i = 0; i < 10; i++){
        int t;
        cin >> t;

        n.push_back(t % 42);
    }

    sort(n.begin(), n.end());
    n.resize(unique(n.begin(), n.end()) - n.begin());

    cout << n.size();

    return 0;
}
