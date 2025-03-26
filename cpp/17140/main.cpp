#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int r, c, k;

int A[100][100];

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    cin >> r >> c >> k;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }

    int R = 3, C = 3;

    int n[100] = { 0, };


    for(int t = 0; t <= 100; t++){
        if(A[r - 1][c - 1] == k){
            cout << t;

            return 0;
        }

        if(R >= C){
            for(int i = 0; i < R; i++){
                vector<pair<int, int>> l;

                for(int j = 0; j < C; j++){
                    if(A[i][j] > 0){
                        n[A[i][j] - 1]++;
                        A[i][j] = 0;
                    }
                }

                for(int j = 0; j < 100; j++){
                    if(n[j] > 0){
                        l.push_back(make_pair(j + 1, n[j]));
                        n[j] = 0;
                    }
                }

                sort(l.begin(), l.end(), compare);

                if(C < l.size() * 2) C = l.size() * 2;

                for(int j = 0; j < l.size(); j++){
                    if(j == 50){
                        C = 100;
                        break;
                    }

                    A[i][j * 2] = l[j].first;
                    A[i][j * 2 + 1] = l[j].second;
                }
            }
        } else {
            for(int i = 0; i < C; i++){
                vector<pair<int, int>> l;

                for(int j = 0; j < R; j++){
                    if(A[j][i] > 0){
                        n[A[j][i] - 1]++;
                        A[j][i] = 0;
                    }
                }

                for(int j = 0; j < 100; j++){
                    if(n[j] > 0){
                        l.push_back(make_pair(j + 1, n[j]));
                        n[j] = 0;
                    }
                }

                sort(l.begin(), l.end(), compare);

                if(R < l.size() * 2) R = l.size() * 2;

                for(int j = 0; j < l.size(); j++){
                    if(j == 50){
                        R = 100;
                        break;
                    }

                    A[j * 2][i] = l[j].first;
                    A[j * 2 + 1][i] = l[j].second;
                }
            }
        }
    }

    cout << -1;

    return 0;
}
