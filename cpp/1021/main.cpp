#include <iostream>
#include <deque>

using namespace std;

int N, M;

int P;

deque<int> D;

deque<int> f, b;

int res = 0;

int main()
{
    cin >> N >> M;
    
    for(int i = 1; i <= N; i++) D.push_back(i);
    
    for(int i = 0; i < M; i++){
        cin >> P;
        
        if(D.front() == P) D.pop_front();
        else {
            f.push_back(D.front());
            D.pop_front();
        
            for(int j = 1; ; j++){
                if(D.front() == P){
                    res += j;
                    
                    D.pop_front();
                    
                    while(!b.empty()){
                        D.push_back(b.front());
                        b.pop_front();
                    }
                    while(!f.empty()){
                        D.push_back(f.front());
                        f.pop_front();
                    }
                    
                    break;
                } else if(D.back() == P){
                    res += j;
                    
                    D.pop_back();
                    
                    while(!f.empty()){
                        D.push_front(f.back());
                        f.pop_back();
                    }
                    while(!b.empty()){
                        D.push_front(b.back());
                        b.pop_back();
                    }
                    
                    break;
                }
                
                f.push_back(D.front());
                D.pop_front();
                b.push_front(D.back());
                D.pop_back();
            }
        }
    }
    
    cout << res;
    
    return 0;
}
