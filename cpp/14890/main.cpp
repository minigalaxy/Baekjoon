#include <iostream>

using namespace std;

int main()
{
    short N,L;
    short res = 0;

    short MAP[100][100];

    cin >> N >> L;

    for(short i = 0; i < N; i++){
        for(short j = 0; j < N; j++){
            cin >> MAP[i][j];
        }
    }

    short p, t, c;
    bool r;

    for(short i = 0; i < N; i++){
        p = MAP[i][0], t = 0, c = 0;
        r = true;

        for(short j = 0; j < N; j++){
            if(p != MAP[i][j]){
                if(abs(MAP[i][j] - p) >= 2){
                    r = false;
                    break;
                }

                if(MAP[i][j] > p){
                    t += L;

                    if(t > c){
                        r = false;
                        break;
                    }

                    t = 0;
                    p = MAP[i][j];
                    c = 1;
                } else {
                    if(t > c){
                        r = false;
                        break;
                    }

                    t = L;
                    p = MAP[i][j];
                    c = 1;
                }
            } else {
                c++;
            }
        }

        if(t > c){
            r = false;
        }

        if(r){
            res++;
        }
    }

    for(short i = 0; i < N; i++){
        p = MAP[0][i], t = 0, c = 0;
        r = true;

        for(short j = 0; j < N; j++){
            if(p != MAP[j][i]){
                if(abs(MAP[j][i] - p) >= 2){
                    r = false;
                    break;
                }

                if(MAP[j][i] > p){
                    t += L;

                    if(t > c){
                        r = false;
                        break;
                    }

                    t = 0;
                    p = MAP[j][i];
                    c = 1;
                } else {
                    if(t > c){
                        r = false;
                        break;
                    }

                    t = L;
                    p = MAP[j][i];
                    c = 1;
                }
            } else {
                c++;
            }
        }

        if(t > c){
            r = false;
        }

        if(r){
            res++;
        }
    }

    cout << res;

    return 0;
}
