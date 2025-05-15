#include <iostream>

using namespace std;

int D[20001], front = 10000, back = 9999;

int N;

string C;

int X;

int _size(){
    return back - front + 1;
}
bool _empty(){
    return (_size() == 0);
}
int _front(){
    return ((_empty()) ? -1 : D[front]);
}
int _back(){
    return ((_empty()) ? -1 : D[back]);
}
void _push_front(int X){
    D[--front] = X;
}
void _push_back(int X){
    D[++back] = X;
}
int _pop_front(){
    if(_empty()) return -1;
    else return D[front++];
}
int _pop_back(){
    if(_empty()) return -1;
    else return D[back--];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> C;

        if(C == "push_front"){
            cin >> X;

            _push_front(X);
        } else if(C == "push_back"){
            cin >> X;

            _push_back(X);
        }
        else if(C == "pop_front") cout << _pop_front() << '\n';
        else if(C == "pop_back") cout << _pop_back() << '\n';
        else if(C == "size") cout << _size() << '\n';
        else if(C == "empty") cout << _empty() << '\n';
        else if(C == "front") cout << _front() << '\n';
        else if(C == "back") cout << _back() << '\n';
    }

    return 0;
}
