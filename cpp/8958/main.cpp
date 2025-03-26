#include <iostream>
#include <vector>
#include <string>

using namespace std;

int T;

vector<string> r;
vector<int> s;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        string t;
        cin >> t;

        r.push_back(t);
        s.push_back(0);
    }



    for(int i = 0; i < T; i++){
        int c = 1;

        for(int j = 0; j < r[i].size(); j++){
            if(r[i][j] == 'O'){
                s[i] += c;
                c++;
            } else {
                c = 1;
            }
        }
    }

    for(int i = 0; i < T; i++) cout << s[i] << endl;

    return 0;
}
