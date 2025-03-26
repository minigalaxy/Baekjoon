#include <iostream>
#include <string>

using namespace std;

string A, B;

int lcs[1001][1001] = { 0, };

int m[2] = { 0, 0 };

void bt(int i, int j){
    if(i == 0 || j == 0) return;

    if(lcs[i][j] == lcs[i - 1][j]) bt(i - 1, j);
    else if(lcs[i][j] == lcs[i][j - 1]) bt(i, j - 1);
    else {
        bt(i - 1, j - 1);
        cout << A[i - 1];
    }
}

int main()
{
    cin >> A >> B;

    for(int i = 1; i <= A.size(); i++){
        for(int j = 1; j <= B.size(); j++){
            if(A[i - 1] == B[j - 1]){
                lcs[i][j] = lcs[i - 1][j - 1] + 1;

                if(lcs[i][j] > lcs[m[0]][m[1]]){
                    m[0] = i;
                    m[1] = j;
                }
            } else lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
        }
    }

    cout << lcs[m[0]][m[1]] << '\n';

    bt(m[0], m[1]);

    return 0;
}
