#include <iostream>


using namespace std;



int main(){
    int a[200200];
    int n;
    cin >> n;
    int i;
    i = 0;
    while (i != n){
        cin >> a[i];
        i++;
    }

    int x;
    cin >> x;
    for (int j = 0; j < n; j++){
        if (a[j] == x) {
            cout << j + 1 << " ";  
        }
    }
    return 0;
}