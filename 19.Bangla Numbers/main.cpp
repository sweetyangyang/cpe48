#include <iostream>

using namespace std;


void split(long long n)
{
    if(n>10000000)
    {
        split(n/10000000);
        n%=10000000;
        cout << " kuti";
    }
    if(n>100000)
    {
        split(n/100000);
        n%=100000;
        cout << " lakh";
    }
    if(n>1000)
    {
        split(n/1000);
        n%=1000;
        cout << " hajar";
    }
    if(n>100)
    {
        split(n/100);
        n%=100;
        cout << " shata";
    }
    if(n>0)
    {
        cout << " " << n;
    }
}
int main()
{
    long long n;
    int num = 1;
    while(cin >> n)
    {  
        cout << " " << " " << num << ".";
        if(n > 0)
        {
            split(n);
        }
        else
        {
            cout << " 0";
        }
        cout << endl;
        num++;
    }
    return 0;
}