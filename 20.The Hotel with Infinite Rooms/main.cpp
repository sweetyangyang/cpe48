#include<iostream>

using namespace std;
int main ()
{
    long long s, d;

    while(cin >> s >> d)
    {
        while(d>0)
        {
            d = d - s;
            if(d<=0)
            {
                cout << s <<endl;
                break;
            }
            s++;
        }
    }
    return 0;
}