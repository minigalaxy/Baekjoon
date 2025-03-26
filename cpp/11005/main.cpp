#include <iostream>
#include <stack>

using namespace std;

int N, B;

stack<char> res;

int main()
{
    cin >> N >> B;

    int tmp = B;

    while(N){
        char tmp = N % B;
        N /= B;

        if(tmp >= 10) tmp += 55;
        else tmp += 48;

        res.push(tmp);
    }

    while(!res.empty()){
        cout << res.top();
        res.pop();
    }

    return 0;
}
