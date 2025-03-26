#include <iostream>

using namespace std;

int N, scale ;

bool res[531442];

void draw(int left, int right){
    if(left == right) return;

    draw(left, left + (right - left + 1) / 3 - 1);
    fill(res + left + (right - left + 1) / 3, res + right - (right - left + 1) / 3 + 1, true);
    draw(right - (right - left + 1) / 3 + 1, right);
}

int main()
{
    while(cin >> N){
        scale = 1;

        for(int i = 0; i < N; i++) scale *= 3;

        fill(res + 1, res + scale + 1, false);

        draw(1, scale);

        for(int i = 1; i <= scale; i++) cout << ((res[i]) ? ' ' : '-');

        cout << '\n';
    }

    return 0;
}
