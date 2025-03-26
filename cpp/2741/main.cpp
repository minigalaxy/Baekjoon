#include <iostream>
#include <string>

using namespace std;

int N;
string s;

int main()
{
    cin >> N;

    for(int i = 1; i < N + 1; i++){
        s.append(to_string(i));
        s.push_back('\n');
    }

    cout << s;

    return 0;
}
