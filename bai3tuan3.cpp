#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap mang: ";
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cout << "So thu " << i+1 << " = ";
        cin >> a[i];
        while (a[i]>9)
        {
            cout << "Yeu cau nhap lai: ";
            cin >> a[i];
        }
    }

    int b[10] = {0};
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i == a[j]) b[i]++;
        }
    }
    for (int i=0; i<10; i++)
    {
        if (b[i]!=0)
        {
            cout << "So " << i << " xuat hien " << b[i] << " lan." << endl;
        }
    }
    return 0;
}
