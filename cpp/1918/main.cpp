#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

string formula;

pair<string, int> postfix(int idx){
    string res;
    vector<pair<string, char>> term;
    vector<pair<string, char>> term2;

    while(idx < formula.size()){
        string t;

        if(formula[idx] == '('){
            tie(t, idx) = postfix(idx + 1);
        } else t.push_back(formula[idx]);

        if(idx + 1 < formula.size()){
            term.push_back(make_pair(t, formula[idx + 1]));

            if(formula[idx + 1] == ')') break;
        } else{
            term.push_back(make_pair(t, ')'));
            break;
        }

        idx += 2;
    }

    for(int i = 0; i < term.size(); i++){
        if(term[i].second == '+' || term[i].second == '-' || term[i].second == ')') term2.push_back(term[i]);
        else {
            string t = term[i].first;

            while(term[i].second == '*' || term[i].second == '/'){
                i++;

                t += term[i].first + term[i - 1].second;
            }

            term2.push_back(make_pair(t, term[i].second));
        }
    }

    res = term2[0].first;

    for(int i = 0; i < term2.size() - 1; i++){
        res += term2[i + 1].first + term2[i].second;
    }

    return make_pair(res, idx + 1);
}

int main()
{
    cin >> formula;

    cout << postfix(0).first;

    return 0;
}
