#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int M, N;

vector<int> result;

int main()
{
    cin >> M >> N;

    for(int i = M; i <= N; i++){
        bool flag = false;

        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                flag = true;
                break;
            }
        }

        if(i == 1) flag = true;

        if(!flag) result.push_back(i);
    }

    for(int t: result) cout << t << '\n';

    return 0;
}
