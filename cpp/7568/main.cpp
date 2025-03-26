#include <iostream>
#include <vector>

using namespace std;

int N;
vector<pair<int, int>> l;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;

        l.push_back(make_pair(x, y));
    }

    for(int i = 0; i < N; i++){
        int t = 1;

        for(int j = 0; j < N; j++) if(i != j && l[j].first > l[i].first && l[j].second > l[i].second) t++;

        cout << t << ' ';
    }

    return 0;
}
