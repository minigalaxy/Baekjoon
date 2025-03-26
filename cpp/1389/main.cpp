#include <iostream>
#include <vector>

using namespace std;

int N, M;

int network[101][101];

int res;

int main()
{
    fill(network[0], network[101], 100);

    cin >> N >> M;

    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;

        network[a][b] = 1;
        network[b][a] = 1;
    }

    for(int i = 1; i <= N; i++) network[i][i] = 0;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            for(int k = 1; k <= N; k++){
                network[j][k] = min(network[j][k], network[j][i] + network[i][k]);
            }
        }
    }

    int tmp = 10000;

    for(int i = 1; i <= N; i++){
        int sum = 0;

        for(int j = 1; j <= N; j++) sum += network[i][j];

        if(sum < tmp){
            res = i;
            tmp = sum;
        }
    }

    cout << res;

    return 0;
}
