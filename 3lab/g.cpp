#include <iostream>

using namespace std;

string bs(int arr[], int l, int r, int x){
    while (l <= r){
        //int m = l + (r - l) / 2;
        int m = (l + r ) / 2;
        if (arr[m] == x)
            return "YES";
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return "NO";
}

int main(){
    int n, k;
    cin >> n >> k;
    int a[n], b[k];
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        a[i] = k;
    }
    for (int j = 0;  j < k; j++)
    {
        int f;
        cin >> f;
        b[j] = f;
    }
    int x;

    for (int q = 0; q < k; q++){
    cout << bs(a, 0, n - 1, b[q]) <<endl;
    
    }
    return 0;
}