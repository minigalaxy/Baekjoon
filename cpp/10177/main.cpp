#include <iostream>

using namespace std;

int n;

int m;

int square[5][5];

bool magic_square(){
    int sum = 0, tmp;

    for(int j = 0; j < m; j++) sum += square[0][j];

    for(int j = 1; j < m; j++){
        tmp = 0;

        for(int k = 0; k < m; k++) tmp += square[j][k];

        if(tmp != sum) return false;
    }

    for(int j = 0; j < m; j++){
        tmp = 0;

        for(int k = 0; k < m; k++) tmp += square[k][j];

        if(tmp != sum) return false;
    }

    tmp = 0;

    for(int j = 0; j < m; j++) tmp += square[j][j];

    if(tmp != sum) return false;

    tmp = 0;

    for(int j = m - 1; j > -1; j--) tmp += square[j][j];

    if(tmp != sum) return false;

    return true;
}

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m;

        for(int j = 0; j < m; j++){
            for(int k = 0; k < m; k++) cin >> square[j][k];
        }

        if(magic_square()) cout << "Magic square of size " << m << '\n';
        else cout << "Not a magic square\n";
    }

    return 0;
}
