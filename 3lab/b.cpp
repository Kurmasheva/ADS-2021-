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

    int max = -1e9;
    for (int j = 0; j < n; j++){
        if (a[j] >= max) {
            max = a[j];  
        }
    }
    cout << max;
    return 0;
}