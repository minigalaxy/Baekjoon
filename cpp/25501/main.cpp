#include <iostream>

using namespace std;

int T;

string S;
int cnt;

int recursion(int l, int r){
    cnt++;

    if(l >= r) return 1;
    else if(S[l] != S[r]) return 0;
    else return recursion(l+1, r-1);
}

int isPalindrome(){
    return recursion(0, S.size() - 1);
}

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> S;

        cnt = 0;

        cout << isPalindrome() << ' ' << cnt << '\n';
    }

    return 0;
}
