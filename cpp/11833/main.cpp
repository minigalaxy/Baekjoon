#include <iostream>
#include <deque>
#include <string>

using namespace std;

int N;
int R, S;

deque<int> p1, p2;
int n1 = 0, n2 = 0;

string res;

char eval(){
    int v1 = 0, v2 = 0;

    if(n1 < n2){
        v2 = 1;

        for(int i = 0; i < n1; i++){
            if(p1[i] > p2[i]) v1 = 1;
        }
    } else if(n1 > n2){
        v1 = 1;

        for(int i = 0; i < n2; i++){
            if(p1[i] < p2[i]) v2 = 1;
        }
    } else {
        for(int i = 0; i < n1; i++){
            if(p1[i] > p2[i]) v1 = 1;
            else v2 = 1;
        }
    }

    if(v1 > v2) return '>';
    else if(v1 < v2) return '<';
    else return '?';
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int R, S;
        cin >> R >> S;

        if(S == 1){
            p1.push_front(R);
            n1++;
        } else {
            p2.push_front(R);
            n2++;
        }

        res.push_back(eval());
        res.push_back('\n');
    }

    cout << res;

    return 0;
}
