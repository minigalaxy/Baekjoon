#include <iostream>
#include <string>
#include <set>

using namespace std;

int N;

string a, b;

set<string> dancer;

int main()
{
    dancer.insert("ChongChong");

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> a >> b;

        if(dancer.find(a) != dancer.end()) dancer.insert(b);
        if(dancer.find(b) != dancer.end()) dancer.insert(a);
    }

    cout << dancer.size();

    return 0;
}
