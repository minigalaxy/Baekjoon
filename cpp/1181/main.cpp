#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int N;
vector<string> w;
string r;

bool compare(string a, string b){
    if(a.size() != b.size()) return a.size() < b.size();

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return int(a[i]) < int(b[i]);
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++){
        string t;
        cin >> t;

        w.push_back(t);
    }

    sort(w.begin(), w.end(), compare);
    w.erase(unique(w.begin(), w.end()), w.end());

    for(int i = 0; i < w.size(); i++){
        r += w[i];
        r.push_back('\n');
    }

    cout << r;

    return 0;
}
