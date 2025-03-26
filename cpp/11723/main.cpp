#include <iostream>
#include <string>

using namespace std;

int M;

int S = 0;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> M;

    for(int i = 0; i < M; i++){
        int x;
        string com;

        cin >> com;

        if(com == "add"){
            cin >> x;

            S |= (1 << x);
        } else if(com == "remove"){
            cin >> x;

            S &= ~(1 << x);
        } else if(com == "check"){
            cin >> x;

            cout << ((S & (1 << x)) >> x) << '\n';
        } else if(com == "toggle"){
            cin >> x;

            S ^= (1 << x);
        } else if(com == "all"){
            S = (1 << 21) - 1;
        } else {
            S = 0;
        }
    }

    return 0;
}
