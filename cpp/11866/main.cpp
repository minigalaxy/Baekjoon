#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, K;

queue<int> circle;

vector<int> result;

int main()
{
    cin >> N >> K;

    for(int i = 1; i <= N; i++) circle.push(i);

    while(!circle.empty()){
        for(int i = 1; i < K; i++){
            circle.push(circle.front());
            circle.pop();
        }
        result.push_back(circle.front());
        circle.pop();
    }

    cout << '<' << result[0];
    for(int i = 1; i < result.size(); i++) cout << ", " << result[i];
    cout << '>';

    return 0;
}
