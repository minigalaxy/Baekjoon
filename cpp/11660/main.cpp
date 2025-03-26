#include <iostream>
#include <vector>

using namespace std;

int N, M;
int x1, y1, x2, y2;

int mat[1024][1024];

vector<int> res;

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        for(int j = 0, sum = 0; j < N; j++){
            int t;
            cin >> t;

            sum += t;

            mat[i][j] = sum;

            if(i > 0) mat[i][j] += mat[i - 1][j];
        }
    }

    for(int i = 0; i < M; i++){
        int t;

        cin >> x1 >> y1 >> x2 >> y2;

        x1--;
        y1--;
        x2--;
        y2--;

        t = mat[x2][y2];

        if(x1 > 0){
            t -= mat[x1 - 1][y2];
        }
        if(y1 > 0) {
            t -= mat[x2][y1 - 1];
        }
        if(x1 > 0 && y1 > 0){
            t += mat[x1 - 1][y1 - 1];
        }

        res.push_back(t);
    }

    for(int t: res) cout << t << '\n';

    return 0;
}
