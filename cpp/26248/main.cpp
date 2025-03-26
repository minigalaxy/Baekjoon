#include <iostream>
#include <tuple>

using namespace std;

int T;

int N, K;

vector<pair<int, int>> beast;

vector<tuple<int, int, int>> strategy;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N >> K;

        for(int j = 0; j < N; j++){
            int a, b;
            cin >> a >> b;

            beast.push_back(make_pair(a, b));
        }


    }


    return 0;
}
