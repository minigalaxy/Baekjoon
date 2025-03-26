#include <iostream>
#include <vector>

using namespace std;

int T;

vector<int> A;
vector<int> B;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        int a, b;
        cin >> a >> b;

        A.push_back(a);
        B.push_back(b);
    }

    for(int i = 0; i < T; i++){
        cout << A[i] + B[i] << endl;
    }

    return 0;
}
