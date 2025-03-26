#include <iostream>
#include <queue>

using namespace std;

int n;

int inf, a;

queue<int> student;

int res[2];

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> inf;

        if(inf == 1){
            cin >> a;

            student.push(a);

            if(student.size() > res[0]){
                res[0] = student.size();
                res[1] = student.back();
            } else if(student.size() == res[0]){
                res[1] = min(res[1], student.back());
            }
        } else {
            student.pop();
        }
    }

    cout << res[0] << ' ' << res[1];

    return 0;
}
