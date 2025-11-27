#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int N;

string num[1'000];

unordered_set<string> S;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> num[i];

        reverse(num[i].begin(), num[i].end());
    }

    for(int i = 1; i <= num[0].size(); i++){
        S.clear();

        bool flag = true;

        for(int j = 0; j < N; j++){
            if(S.find(num[j].substr(0, i)) != S.end()){
                flag = false;
                break;
            }

            S.insert(num[j].substr(0, i));
        }

        if(flag){
            cout << i;
            break;
        }
    }

    return 0;
}
