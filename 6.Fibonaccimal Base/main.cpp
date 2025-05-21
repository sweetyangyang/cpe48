#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int> f(40);
    f[0]=1;
    f[1]=2;
    for(int i=2;i<40;i++)
    {
        f[i]= f[i-1]+f[i-2];
    }
    //以上先把數列都寫好
    int testnum; //共有多少筆
    int a;       //每筆進來的數字
    cin >> testnum;
    while(testnum--)
    {
        cin >> a;
        cout << a << " = ";
        bool flag = false;
        string fbase =  "";
        // 使用 Zeckendorf 表示法（從最大的 Fibonacci 數開始）
        for(int j=39; j>=0;j--)
        {
            if(f[j] <= a)
            {
                a = a - f[j];
                fbase += "1";
                flag = true;//表示從這邊開始
            }
            else if(flag == true)
            {
                fbase +=  "0";
            }
        }
        cout << fbase << " (fib)" <<endl;
    }
    return 0;
}
