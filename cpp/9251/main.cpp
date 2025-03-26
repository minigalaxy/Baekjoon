#include <iostream>
#include <string>

using namespace std;

string A, B;

int lcs[1001][1001] = { 0, };

int res = 0;

int main()
{
    cin >> A >> B;

    for(int i = 1; i <= A.size(); i++){
        for(int j = 1; j <= B.size(); j++){
            if(A[i - 1] == B[j - 1]){
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            } else {
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }

            if(lcs[i][j] > res) res = lcs[i][j];
        }
    }

    cout << res;

    return 0;
}
