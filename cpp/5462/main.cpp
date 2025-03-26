#include <iostream>

using namespace std;

int N, T, P;

bool participant[2000][2000];

int problem[2000] = { 0, };
pair<int, pair<int, int>> score[2000];

int r = 1;

int main()
{
    cin >> N >> T >> P;

    P--;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < T; j++) cin >> participant[i][j];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < T; j++){
            if(!participant[i][j]) problem[j]++;
        }
    }

    for(int i = 0; i < N; i++){
        score[i].first = i;

        for(int j = 0; j < T; j++){
            if(participant[i][j]){
                score[i].second.first += problem[j];
                score[i].second.second++;
            }
        }
    }

    for(int i = 0; i < N; i++){
        if(i != P){
            if(score[i].second.first > score[P].second.first) r++;
            else if(score[i].second.first == score[P].second.first){
                if(score[i].second.second > score[P].second.second) r++;
                else if(score[i].second.second == score[P].second.second){
                    if(i < P) r++;
                }
            }
        }
    }

    cout << score[P].second.first << ' ' << r;

    return 0;
}
