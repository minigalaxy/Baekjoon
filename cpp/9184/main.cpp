#include <iostream>

using namespace std;

int a, b, c;

int memory[21][21][21];

int w(int a, int b, int c){
    if(a <= 0 || b <= 0 || c <= 0) return 1;
    else if(a > 20 || b > 20 || c > 20) return w(20, 20, 20);
    else if(a < b && b < c){
        if(memory[a][b][c - 1] == 10000000) memory[a][b][c - 1] = w(a, b, c - 1);
        if(memory[a][b - 1][c] == 10000000) memory[a][b - 1][c] = w(a, b - 1, c);
        if(memory[a][b - 1][c - 1] == 10000000) memory[a][b - 1][c - 1] = w(a, b - 1, c - 1);

        return memory[a][b][c - 1] + memory[a][b - 1][c - 1] - memory[a][b - 1][c];
    } else {
        if(memory[a - 1][b][c] == 10000000) memory[a - 1][b][c] = w(a - 1, b, c);
        if(memory[a - 1][b - 1][c] == 10000000) memory[a - 1][b - 1][c] = w(a - 1, b - 1, c);
        if(memory[a - 1][b][c - 1] == 10000000) memory[a - 1][b][c - 1] = w(a - 1, b, c - 1);
        if(memory[a - 1][b - 1][c - 1] == 10000000) memory[a - 1][b - 1][c - 1] = w(a - 1, b - 1, c - 1);

        return memory[a - 1][b][c] + memory[a - 1][b - 1][c] + memory[a - 1][b][c - 1] - memory[a - 1][b - 1][c - 1];
    }
}

int main()
{
    fill(memory[0][0], memory[21][0], 10000000);

    while(true){
        cin >> a >> b >> c;

        if(a == -1 && b == -1 && c == -1) break;

        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
    }

    return 0;
}
