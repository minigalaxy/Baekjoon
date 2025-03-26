#include <iostream>
#include <deque>

using namespace std;

int N;

deque<pair<int, int>> D;

int main()
{
    cin >> N;

    for(int i = 1; i <= N; i++){
        int t;
        cin >> t;

        D.push_back(make_pair(i, t));
    }

    for(int i = 0; i < N; i++){
        pair<int, int> balloon = D.front();
        D.pop_front();

        cout << balloon.first << ' ';

        if(balloon.second > 0){
            for(int j = 1; j < balloon.second; j++){
                D.push_back(D.front());
                D.pop_front();
            }
        } else {
            for(int j = 0; j < -balloon.second; j++){
                D.push_front(D.back());
                D.pop_back();
            }
        }
    }

    return 0;
}
