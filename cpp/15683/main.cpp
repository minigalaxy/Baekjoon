#include <iostream>

using namespace std;

int room[8][8];
int n,m;
int res = 64;

int cctv_x[8], cctv_y[8], cctv_t[8];
int c = 0;

void cal(int x, int y, int dx, int dy, int space[8][8]){
    space[y][x] = 1;

    if(dx != 0){
        if(dx != 1){
            for(int i = x - 1; i >= 0; i--){
                if(space[y][i] == 6) break;
                space[y][i] = 1;
            }
        }
        if(dx != -1){
            for(int i = x + 1; i < m; i++){
                if(space[y][i] == 6) break;
                space[y][i] = 1;
            }
        }
    }
    if(dy != 0){
        if(dy != 1){
            for(int i = y - 1; i >= 0; i--){
                if(space[i][x] == 6) break;
                space[i][x] = 1;
            }
        }
        if(dy != -1){
            for(int i = y + 1; i < n; i++){
                if(space[i][x] == 6) break;
                space[i][x] = 1;
            }
        }
    }


}

void dfs(int cctv, int space[8][8]){
    if(cctv == -1){
        int t = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(space[i][j] == 0) t++;
            }
        }

        if(t < res) res = t;
        return;
    }

    int space_1[8][8], space_2[8][8], space_3[8][8], space_4[8][8];

    copy(&space[0][0], &space[0][0] + 64, &space_1[0][0]);
    copy(&space[0][0], &space[0][0] + 64, &space_2[0][0]);
    copy(&space[0][0], &space[0][0] + 64, &space_3[0][0]);
    copy(&space[0][0], &space[0][0] + 64, &space_4[0][0]);

    switch(cctv_t[cctv]){
        case 1:
            cal(cctv_x[cctv], cctv_y[cctv], 1, 0, space_1);
            cal(cctv_x[cctv], cctv_y[cctv], -1, 0, space_2);
            cal(cctv_x[cctv], cctv_y[cctv], 0, 1, space_3);
            cal(cctv_x[cctv], cctv_y[cctv], 0, -1, space_4);

            dfs(cctv - 1, space_1);
            dfs(cctv - 1, space_2);
            dfs(cctv - 1, space_3);
            dfs(cctv - 1, space_4);
            break;
        case 2:
            cal(cctv_x[cctv], cctv_y[cctv], 2, 0, space_1);
            cal(cctv_x[cctv], cctv_y[cctv], 0, 2, space_2);

            dfs(cctv - 1, space_1);
            dfs(cctv - 1, space_2);
            break;
        case 3:
            cal(cctv_x[cctv], cctv_y[cctv], 1, 1, space_1);
            cal(cctv_x[cctv], cctv_y[cctv], 1, -1, space_2);
            cal(cctv_x[cctv], cctv_y[cctv], -1, 1, space_3);
            cal(cctv_x[cctv], cctv_y[cctv], -1, -1, space_4);

            dfs(cctv - 1, space_1);
            dfs(cctv - 1, space_2);
            dfs(cctv - 1, space_3);
            dfs(cctv - 1, space_4);
            break;
        case 4:
            cal(cctv_x[cctv], cctv_y[cctv], 1, 2, space_1);
            cal(cctv_x[cctv], cctv_y[cctv], -1, 2, space_2);
            cal(cctv_x[cctv], cctv_y[cctv], 2, -1, space_3);
            cal(cctv_x[cctv], cctv_y[cctv], 2, 1, space_4);

            dfs(cctv - 1, space_1);
            dfs(cctv - 1, space_2);
            dfs(cctv - 1, space_3);
            dfs(cctv - 1, space_4);
            break;
        case 5:
            cal(cctv_x[cctv], cctv_y[cctv], 2, 2, space_1);

            dfs(cctv - 1, space_1);
            break;

    }
}

int main()
{
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int t;
            cin >> t;

            if(t > 0 && t < 6){
                cctv_y[c] = i;
                cctv_x[c] = j;
                cctv_t[c] = t;
                c++;

                room[i][j] = 0;
            } else room[i][j] = t;
        }
    }

    dfs(c - 1, room);

    cout << res;

    return 0;
}


