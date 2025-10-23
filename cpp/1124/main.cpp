#include <iostream>
#include <vector>

using namespace std;

int A, B;

bool P[100'001] = { true, true, };

vector<int> prime;

int C[100'001] = { 0, };

int res = 0;

int main()
{
    for(int i = 2; i < 100'001; i++){
        for(int j = 2; i * j < 100'001; j++){
            P[i * j] = true;
        }
    }

    for(int i = 2; i < 100'001; i++){
        if(!P[i]) prime.push_back(i);
    }

    for(int i = 1; i < 100'001; i++){
        for(int j: prime){
            if(i * j > 100'000) break;

            C[i * j] = C[i] + 1;
        }
    }

    cin >> A >> B;

    for(int i = A; i <= B; i++){
        if(!P[C[i]]) res++;
    }

    cout << res;

    return 0;
}
