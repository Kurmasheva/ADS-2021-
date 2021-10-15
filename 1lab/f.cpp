#include <iostream>

using namespace std;

  struct Stack{
    char a[1000000];
    int top_index;
    Stack(){
        top_index = -1;
    }


    void push(char x){
        top_index++;
        a[top_index] = x;
    }

    void pop(){
        top_index--;
    }

    int size(){
        return top_index + 1;
    }

    void clear(){
        top_index = -1;
    }

    char top(){
        return a[top_index];
    }

};

int main(){
    string str;
    cin >> str;
    int k;
    k = str.size();
    Stack st;
    bool check;
    check = true;
    for (int i = 0; i < k; i++){
        if(str[i] == '(' or str[i] == '[' or str[i] == '{'){
            st.push(str[i]);
        }
        else{
            if(st.size() == 0){
                check = false;
                break;
            }
            else{
                if((str[i] == ')' and st.top() == '(') or (str[i] == ']' and st.top() == '[') or (str[i] == '}' and st.top() == '{')){
                    st.pop();
                }
                else{
                    check = false;
                    break;
                }

            }
        }
    }    
    
    if(check == false or st.size() != 0){
        cout << "no" << endl;
    }
    else{
        cout << "yes" << endl;
    }    
    

        return 0;
} 