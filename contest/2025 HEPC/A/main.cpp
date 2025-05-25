#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

vector<pair<pair<int, int>, string>> student;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string name;
        int score, risk, cost;
        cin >> name >> score >> risk >> cost;
        
        student.push_back({ { -((score * score * score) / (cost * (risk + 1))), cost }, name });
    }
    
    sort(student.begin(), student.end());
    
    cout << student[1].second;
    
    return 0;
}
