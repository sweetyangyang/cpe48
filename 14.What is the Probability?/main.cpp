#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int s;//共有多少組
    int n=0,k=0;
    double p=0.0;


    cin >> s;
    while(s--)
    {
        cin >> n >> p >> k;
        if(p==0)
        {
            cout << "0.0000" << endl;
            continue;
        }
        double r = pow (1-p,n);
        double a1 = pow (1-p,k-1) * p;

        cout << fixed << setprecision(4) << (a1 / (1-r))<< endl;
    }
return 0;

}