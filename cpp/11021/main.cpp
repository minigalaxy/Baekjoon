#include <iostream>
#include <vector>

using namespace std;

int T;

int A, B;

vector<int> res;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> A >> B;

        res.push_back(A + B);
    }

    for(int i = 1; i <= T; i++) cout << "Case #" << i << ": " << res[i - 1] << '\n';

    return 0;
}
