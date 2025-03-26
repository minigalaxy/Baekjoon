#include <iostream>

using namespace std;

int T;

string n, m;

int a = 0, b = 0;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        a = 0;
        b = 0;

        cin >> n >> m;

        for(int j = 0; j < n.size(); j++){
            if(n[j] != m[j]){
                if(n[j] == '1') a++;
                else b++;
            }
        }

        cout << max(a, b) << '\n';
    }

    return 0;
}
