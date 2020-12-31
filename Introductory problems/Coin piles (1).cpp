#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n ;
    while(n--)
    {
        long long int a , b ;
        cin >> a >> b;
            long long int first = min(a,b);
            long long int second = max(a,b);
            long long int k = (2 * first) - second;
            if((k >= 0) && (k % 3 == 0))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
    }
}
