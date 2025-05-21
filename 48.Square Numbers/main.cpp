#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    
    int a=0,b=0,q=0;
    
    while(cin >> a >> b )
    {
        if(a==0&&b==0)
        {
        break;
        }
        int count =0;
        for(int i=a;i<=b;i++)
        {
            q = sqrt(i);

            if(q*q==i)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    
return 0;
}