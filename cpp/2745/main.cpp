#include <iostream>

using namespace std;

string N;
int B;

int res = 0;

int main()
{
    cin >> N >> B;

    for(int i = 0, tmp; i < N.size(); i++){
        if(N[N.size() - i - 1] >= 65) tmp = (N[N.size() - i - 1] - 55);
        else tmp = (N[N.size() - i - 1] - 48);

        for(int j = 0; j < i; j++) tmp *= B;

        res += tmp;
    }

    cout << res;

    return 0;
}
