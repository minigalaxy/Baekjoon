#include <iostream>

using namespace std;

int N;

bool room[100][100] = { false, };

int res[2] = { 0, 0 };

int main()
{
    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            room[i][j] = (getchar() == '.');
        }
    }

    for(int i = 0; i < N; i++){
        bool b = true;

        for(int j = 0; j < N; j++){
            if(b){
                if(room[i][j])
            }
        }
    }



    return 0;
}
