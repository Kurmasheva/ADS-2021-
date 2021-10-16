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
    int k = 0;
    for (int j = 0; j < n; j++){
        if (a[j] >= max) {
            max = a[j];
        } 
    }

    for (int i = 0; i< n; i++){
        if (a[i] == max){
            a[i] = 0;
        }
    }
    int max2 = -1e9;
    for (int j = 0; j < n; j++){
        if (a[j] >= max2) {
            max2 = a[j];
        }
        
    }
    cout << max2;
    return 0;
}