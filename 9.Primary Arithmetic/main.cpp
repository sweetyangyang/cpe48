#include <iostream>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //讓cin 跟cout 可以同步執行
    long long a ,b;
    while(cin >> a >> b)
    {
        int c=0;//進位的數字
        int totalc=0;
        if(a==0 && b==0)
        {
            break;
        }
        while(a!=0 || b!=0)
        {
            int s = (a%10) + (b%10) + c;
            c = s/10;

            if(c>0)
            {
                totalc++;
            }
            a = a/10;
            b = b/10;

        }
        if(totalc == 0)
            cout << "No carry operation.\n";
        else if (totalc == 1)
            cout << totalc << " carry operation.\n";
        else
            cout << totalc << " carry operations.\n";
    }

}