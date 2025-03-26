#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

vector<pair<int, int>> meeting;

int res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int a, b;
        cin >> a >> b;

        meeting.push_back(make_pair(b, a));
    }

    sort(meeting.begin(), meeting.end());

    int tmp = 0;

    for(int i = 0; i < N; i++){
        if(meeting[i].second >= tmp){
            tmp = meeting[i].first;
            res++;
        }
    }

    cout << res;

    return 0;
}
