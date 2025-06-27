#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int T;

string N;

string A, B;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;

        for(char &c: N) if(c == '6') c = '9';

        sort(N.begin(), N.end(), greater<>());

        A.clear();
        B.clear();

        A.push_back(N[0]);
        B.push_back(N[1]);

        for(int j = 2; j < N.size(); j++){
            if(stoll(A) <= stoll(B)) A.push_back(N[j]);
            else B.push_back(N[j]);
        }

        cout << (stoll(A) * stoll(B)) << '\n';
    }

    return 0;
}
