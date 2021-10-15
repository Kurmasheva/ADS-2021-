#include <iostream>

using namespace std;

struct Stack{
    int a[100];
    int top_index;
    Stack(){
        top_index = -1;
    }

    void back(){
        if(top_index == -1){
            cout<<"error"<<endl;
        }
        else{
            cout<< a[top_index]<<endl;
        }

    }

    void push(int x){
        top_index++;
        a[top_index] = x;
    }

    void pop(){
        if(top_index != -1){
            cout << a[top_index]<<endl;
            top_index--;
        }
        else{
            cout << "error"<<endl;
        }
    }


    int size(){
        return top_index + 1;
    }

    void clear(){
        top_index = -1;
    }

    bool exit(bool k){
        k = false;
        return k;
    }

};

int main(){
    Stack st;
    bool k;
    k = true;
    while(k){
        string s;
        cin >> s;
        if(s == "size"){
            cout << st.size()<<endl;
        }
        else if (s == "push"){
            int a;
            cin >> a;
            st.push(a);
            cout << "ok"<<endl;
        }
        else if(s == "pop"){
            st.pop();
        }
        else if(s == "back"){
            st.back();
        }
        else if(s == "clear"){
            st.clear();
            cout << "ok"<<endl;
        }
        else{
            k = false;
            cout << "bye" << endl;
        }
    }

    return 0;
}