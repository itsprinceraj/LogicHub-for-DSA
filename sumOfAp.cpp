#include <iostream>
using namespace std;

//  calculate ap
int calculateAp(int n, int a, int l)
{
    int ans = (n / 2 * (a + l));
    return ans; // gives 36
}

int main()
{
    int ans = calculateAp(6, 2, 10);
    cout << ans << endl;

    return 0;
}