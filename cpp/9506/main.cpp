#include <iostream>
#include <vector>

using namespace std;

int n;

vector<vector<int>> divisor;
vector<int> sum;
vector<int> num;

int main()
{
    while(true){
        cin >> n;

        if(n == -1) break;

        int s = 0;

        vector<int> div;

        for(int i = 1; i < n; i++){
            if(n % i == 0){
                div.push_back(i);
                s += i;
            }
        }

        divisor.push_back(div);
        sum.push_back(s);
        num.push_back(n);
    }

    for(int i = 0; i < num.size(); i++){
        cout << num[i] << ' ';

        if(num[i] == sum[i]){
            cout << "= " << divisor[i][0];

            for(int j = 1; j < divisor[i].size(); j++){
                cout << " + " << divisor[i][j];
            }
        } else {
            cout << "is NOT perfect.";
        }

        cout << '\n';
    }

    return 0;
}
