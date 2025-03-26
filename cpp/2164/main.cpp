#include <iostream>
#include <queue>

using namespace std;

int N;

queue<int> card;

int main()
{
    cin >> N;

    for(int i = 1; i <= N; i++){
        card.push(i);
    }

    while(card.size() > 1){
        card.pop();

        if(card.size() > 1){
            card.push(card.front());
            card.pop();
        }
    }

    cout << card.front();

    return 0;
}
