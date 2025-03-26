#include <iostream>

using namespace std;

int x = 0, y = 0, res = 0;

int main()
{
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            int tmp;
            cin >> tmp;

            if(tmp > res){
                x = j;
                y = i;
                res = tmp;
            }
        }
    }

    cout << res << '\n' << y + 1 << ' ' << x + 1;

    return 0;
}
