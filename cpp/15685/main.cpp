#include <iostream>
#include <vector>

using namespace std;

int N;

int r = 0;
vector<int> dx;
vector<int> dy;
int dc;

bool m[101][101];

vector<int> t;

void chk()
{
    for(int i = 0; i < dc; i++){
        if(dx[i] < 100 && dy[i] < 100){
            if(m[dx[i] + 1][dy[i]] && m[dx[i]][dy[i] + 1] && m[dx[i] + 1][dy[i] + 1]) r++;
        }
    }
}

int ccw(int a)
{
    return (a < 3) ? a + 1 : 0;
}

void draw(int c, int x, int y, int d, int g)
{
    if(c > g) return;

    int ts = t.size();

    for(int i = 0; i < ts; i++){
        t.push_back(ccw(t[ts - 1 - i]));
    }

    for(int i = ts; i < ts * 2; i++
    ){
        if(t[i] == 0) x++;
        else if(t[i] == 1) y--;
        else if(t[i] == 2) x--;
        else if(t[i] == 3) y++;

        if(!m[x][y]){
            m[x][y] = true;

            dx.push_back(x);
            dy.push_back(y);

            dc++;
        }

    }

    if(c == 0){
        if(!m[x][y]){
            m[x][y] = true;

            dx.push_back(x);
            dy.push_back(y);

            dc++;
        }

        if(d == 0) x++;
        else if(d == 1) y--;
        else if(d == 2) x--;
        else if(d == 3) y++;

        if(!m[x][y]){
            m[x][y] = true;

            dx.push_back(x);
            dy.push_back(y);

            dc++;
        }

        t.push_back(d);
    }

    draw(c + 1, x, y, d, g);
}

int main()
{
    int x[20], y[20], d[20], g[20];

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> x[i] >> y[i] >> d[i] >> g[i];
    }

    for(int i = 0; i < N; i++){
        draw(0, x[i], y[i], d[i], g[i]);

        t.clear();
    }

    chk();

    cout << r;

    return 0;
}
