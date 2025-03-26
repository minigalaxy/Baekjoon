#include <iostream>
#include <vector>

using namespace std;

int N;

int n[100];
char d[100][1000][2];

int x, y, z;

void cw(int& h, int& v, int r){
    if(h == -r){
        h = v;
        v = r;
    } else if(v == r){
        v = -h;
        h = r;
    } else if(h == r){
        h = v;
        v = -r;
    } else if(v == -r){
        v = -h;
        h = -r;
    }
}

void ccw(int& h, int& v, int r){
    if(h == -r){
        h = -v;
        v = -r;
    } else if(v == -r){
        v = h;
        h = r;
    } else if(h == r){
        h = -v;
        v = r;
    } else if(v == r){
        v = h;
        h = -r;
    }
}

//정면 기준 가로 x, 세로 y, 그 외 z
void spin(int k){
    for(int i = n[k] - 1; i > -1; i--){
        char td[2];
        td[0] = d[k][i][0];
        td[1] = d[k][i][1];

        if(td[1] == '+') td[1] = '-';
        else td[1] = '+';

        if(td[0] == 'U'){
            if(y == 1){
                if(td[1] == '+') cw(x, z, 2);
                else ccw(x, z, 2);
            } else if(y == 2){
                if(td[1] == '+') cw(x, z, 1);
                else ccw(x, z, 1);
            }
        } else if(td[0] == 'D'){
            if(y == -1){
                if(td[1] == '+') ccw(x, z, 2);
                else cw(x, z, 2);
            } else if(y == -2){
                if(td[1] == '+') ccw(x, z, 1);
                else cw(x, z, 1);
            }
        } else if(td[0] == 'F'){
            if(z == -1){
                if(td[1] == '+') cw(x, y, 2);
                else ccw(x, y, 2);
            } else if(z == -2){
                if(td[1] == '+') cw(x, y, 1);
                else ccw(x, y, 1);
            }
        } else if(td[0] == 'B'){
            if(z == 1){
                if(td[1] == '+') ccw(x, y, 2);
                else cw(x, y, 2);
            } else if(z == 2){
                if(td[1] == '+') ccw(x, y, 1);
                else cw(x, y, 1);
            }
        } else if(td[0] == 'R'){
            if(x == 1){
                if(td[1] == '+') cw(z, y, 2);
                else ccw(z, y, 2);
            } else if(x == 2){
                if(td[1] == '+') cw(z, y, 1);
                else ccw(z, y, 1);
            }
        } else if(td[0] == 'L'){
            if(x == -1){
                if(td[1] == '+') ccw(z, y, 2);
                else cw(z, y, 2);
            } else if(x == -2){
                if(td[1] == '+') ccw(z, y, 1);
                else cw(z, y, 1);
            }
        }

        //cout << x << y << z << td[0] << td[1] << endl;
    }
}

char chk(){
    if(x == 2) return 'b';
    if(x == -2) return 'g';
    if(y == 2) return 'w';
    if(y == -2) return 'y';
    if(z == 2) return 'o';
    if(z == -2) return 'r';
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> n[i];

        for(int j = 0; j < n[i]; j++){
            cin >> d[i][j][0] >> d[i][j][1];
        }
    }

    for(int k = 0; k < N; k++){
        for(int i = 1; i > -2; i--){
            for(int j = -1; j < 2; j++){
                x = j;
                y = 2;
                z = i;

                spin(k);

                cout << chk();
            }

            cout << endl;
        }
    }


    return 0;
}
