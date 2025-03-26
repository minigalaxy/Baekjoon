#include <iostream>
#include <string>

using namespace std;

int N;

string res[3073];

void star(int y, int scale){
    if(scale == 1){
        res[y - 2] += "  *  ";
        res[y - 1] += " * * ";
        res[y] += "*****";
    } else {
        for(int i = y - scale * 3 + 1; i <= y - (scale / 2) * 3; i++){
            for(int j = 0; j < (scale / 2) * 3; j++) res[i].push_back(' ');
        }
        star(y - (scale / 2) * 3, scale / 2);
        for(int i = y - scale * 3 + 1; i <= y - (scale / 2) * 3; i++){
            for(int j = 0; j < (scale / 2) * 3; j++) res[i].push_back(' ');
        }
        star(y, scale / 2);
        for(int i = 0; i < (scale / 2) * 3; i++) res[y - i].push_back(' ');
        star(y, scale / 2);
    }
}

int main()
{
    cin >> N;

    star(N, N / 3);

    for(int i = 1; i <= N; i++) cout << res[i] << '\n';

    return 0;
}
