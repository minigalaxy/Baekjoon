#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int N, M;

unordered_map<string, int> str_dict;
unordered_map<int, string> num_dict;

vector<string> res;

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        string name;
        cin >> name;

        str_dict.insert(make_pair(name, i + 1));
        num_dict.insert(make_pair(i + 1, name));
    }

    for(int i = 0; i < M; i++){
        string t;
        cin >> t;

        if(atoi(t.c_str()) != 0){
            res.push_back(num_dict[atoi(t.c_str())]);
        } else {
            res.push_back(to_string(str_dict[t]));
        }
    }

    for(int i = 0; i < M; i++){
        cout << res[i] << '\n';
    }

    return 0;
}
