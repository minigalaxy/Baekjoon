#include <iostream>

using namespace std;

int n, x, y;

bool paper[100][100] = { false, };

int res = 0;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;

        for(int j = x; j < x + 10; j++){
            for(int k = y; k < y + 10; k++){
                if(!paper[j][k]){
                    paper[j][k] = true;
                    res++;
                }
            }
        }
    }

    cout << res;

    return 0;
}
