#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int N;

vector<int> X;
vector<int> sorted_X;

unordered_map<int, int> zipped_X;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int t;
        cin >> t;

        X.push_back(t);
    }

    copy(X.begin(), X.end(), back_inserter(sorted_X));
    sort(sorted_X.begin(), sorted_X.end());
    sorted_X.erase(unique(sorted_X.begin(), sorted_X.end()), sorted_X.end());

    for(int i = 0; i < sorted_X.size(); i++){
        zipped_X[sorted_X[i]] = i;
    }

    for(int i = 0; i < N; i++){
        cout << zipped_X[X[i]] << ' ';
    }

    return 0;
}
