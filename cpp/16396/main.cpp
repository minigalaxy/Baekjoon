#include <iostream>

using namespace std;

int N;

int X, Y;

bool line[9999] = { false, };

int res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> X >> Y;

        for(int j = X; j < Y; j++){
            if(!line[j - 1]){
                res++;
                line[j - 1] = true;
            }
        }
    }

    cout << res;

    return 0;
}
