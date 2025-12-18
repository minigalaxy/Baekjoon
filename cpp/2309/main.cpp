#include <iostream>
#include <algorithm>

using namespace std;

int D[9];

int sum = 0;

int res[7];

int main()
{
    for(int i = 0; i < 9; i++){
        cin >> D[i];

        sum += D[i];
    }

    for(int i = 0; i < 8; i++){
        for(int j = i + 1; j < 9; j++){
            if(sum - D[i] - D[j] == 100){
                for(int k = 0, l = 0; k < 9; k++){
                    if(k != i && k != j) res[l++] = D[k];
                }

                sort(res, res + 7);

                for(int k = 0; k < 7; k++) cout << res[k] << '\n';

                return 0;
            }
        }
    }

    return 0;
}
