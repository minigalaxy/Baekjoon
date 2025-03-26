#include <iostream>
#include <string>

using namespace std;

int N;

string res[2188];

void draw(int s, int y){
    if(s == 1){
        res[y].push_back('*');
        return;
    }

    draw(s / 3, y);
    draw(s / 3, y);
    draw(s / 3, y);

    draw(s / 3, y + s / 3);
    for(int i = 0; i < s / 3; i++){
        for(int j = 0; j < s / 3; j++) res[y + s / 3 + i].push_back(' ');
    }
    draw(s / 3, y + s / 3);

    draw(s / 3, y + s / 3 * 2);
    draw(s / 3, y + s / 3 * 2);
    draw(s / 3, y + s / 3 * 2);
}

int main()
{
    cin >> N;

    draw(N, 1);

    for(int i = 1; i <= N; i++) cout << res[i] << '\n';

    return 0;
}
