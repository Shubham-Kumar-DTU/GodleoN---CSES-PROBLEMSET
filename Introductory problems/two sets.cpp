#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n ;
    if(n % 4 == 0 || n % 4 == 3)
    {
        cout << "YES" << endl;
        if(n % 4)
        {
            cout << n/2 + 1 << endl;
            cout << 1 << " " << 2 << " " ;
            int i = 4 ;
            int j = n ;
            int k = (n - 3 ) / 4;
            if(n >= 7)
            {
            while(k--)
            {
                cout << i << " " << j << " ";
                i++;
                j--; 
            }
            }
            cout << endl;
            k = (n-3)/4;
            cout << n/2 << endl;
            cout << 3 <<" ";
            if(n >= 7)
            {
                while(k--)
                {
                    cout << i << " " << j << " " ;
                    i++;
                    j--;
                }
            }
            cout << endl;
        }
        else
        {
            cout << n / 2 << endl;
            for(int i = 1 ; i <= n/4 ; i++)
            {
                cout << i << " " << n - i + 1 << " ";
            }
            cout << endl;
            cout << n / 2 << endl;
            for(int i = n/4 + 1 ; i<= n/2 ; i++)
            {
                cout << i << " " << n - i + 1 << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
