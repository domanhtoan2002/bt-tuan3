#include<iostream>
using namespace std;
int triagle(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return triagle(k - 1, n - 1) + triagle(k, n - 1);
}
int main(){
    int n;
    cout << "nhap n : " ;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << triagle(j, i) << " ";
        }
        cout << endl;
    }
    return 0;
}
