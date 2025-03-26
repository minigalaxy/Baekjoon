#include <iostream>

using namespace std;

int N;

bool video[64][64];

string dq(int l, int r, int b, int t){
    if(r - l == 0) return (video[l][b]) ? "1" : "0";

    int hm = (l + r) / 2, vm = (b + t) / 2;

    string lt = dq(l, hm, b, vm), rt = dq(hm + 1, r, b, vm), lb = dq(l, hm, vm + 1, t), rb = dq(hm + 1, r, vm + 1, t);

    if(lt[0] == '0' && rt[0] == '0' && lb[0] == '0' && rb[0] == '0') return "0";
    else if(lt[0] == '1' && rt[0] == '1' && lb[0] == '1' && rb[0] == '1') return "1";
    else return "(" + lt + rt + lb + rb + ")";
}

int main()
{
    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) video[j][i] = getchar() - '0';
        getchar();
    }

    cout << dq(0, N - 1, 0, N - 1);

    return 0;
}
