#include <iostream>

using namespace std;

struct Queue{
    int a[1000000];
    int head;
    int tail;
    int size;
    Queue(){
        head = 0;
        tail = -1;
        size = 0;
    }

    void push(int x){
        tail++;
        a[tail] = x;
        size++;
        cout << "ok" << endl;
    }

    void pop(){
        if(size == 0){
            cout << "error" << endl;
        }
        else{
            cout << a[head] << endl;
            head++;
            size--;
        }
    }

    void front(){
        if(size == 0){
            cout << "error" << endl;
        }
        else{
            cout << a[head] << endl;
        }
    }


    void clear(){
        head = 0;
        tail = -1;
        size = 0;
        cout << "ok" << endl;
    }

    void size_(){
        cout << size << endl;
    }


};

int main(){
    Queue q;
    while(true){
        string s;
        cin >> s;
        if(s == "push"){
            int n;
            cin >> n;
            q.push(n);
        }
        else if(s == "pop"){
            q.pop();
        }
        else if(s == "front"){
            q.front();
        }
        else if(s == "clear"){
            q.clear();
        }
        else if(s == "size"){
            q.size_();
        }
        else{
            cout << "bye" << endl;
            break;
        }
    }

    return 0;
}
    