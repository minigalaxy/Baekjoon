#include <iostream>

using namespace std;

int N, M;

string A, B;

int m[200];

int get_stroke(char c){
    if(c == 'E') return 4;
    else if(c == 'A' || c == 'F' || c == 'H' || c == 'K' || c == 'M') return 3;
    else if(c == 'B' || c == 'D' || c == 'N' || c == 'P' || c == 'Q' || c == 'R' || c == 'T' || c == 'X' || c == 'Y') return 2;
    else return 1;
}

int main()
{
    cin >> N >> M;

    cin >> A >> B;

    {
        int i = 0, j = 0, k = 0;

        while(i < N || j < M){
            if(i < N) m[k++] = get_stroke(A[i++]);
            if(j < M) m[k++] = get_stroke(B[j++]);
        }
    }

    for(int i = N + M; i > 2; i--){
        for(int j = 0; j < i - 1; j++){
            m[j] = (m[j] + m[j + 1]) % 10;
        }
    }

    cout << m[0] * 10 + m[1] << '%';

    return 0;
}
