#include <iostream>
#include <stack>
#include <string>

using namespace std;

int n;

int output[100000];

stack<int> main_stack;

string res;

int c = 1;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++) cin >> output[i];

    for(int i = 0; i < n; i++){
        if(c > output[i] && main_stack.top() != output[i]){
            cout << "NO";
            return 0;
        }

        for(int j = c; j <= output[i]; j++){
            main_stack.push(c++);
            res += "+\n";
        }



        main_stack.pop();
        res += "-\n";
    }

    cout << res;

    return 0;
}
