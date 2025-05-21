#include <iostream>
#include <vector>
using namespace std;



int main()
{

    int n=0;//在一行裡總共有多少數字
    int a1;//用來存兩個數字
    int a2;
    while(cin >> n)
    {
        vector<int> a(n+1,0);//看是否初出現過
        int range=0;//存相差的值
        int t=0;//計算符合條件的差值數量

        cin >> a1;

        for(int i=1 ; i < n ;i++)
        {
            cin >> a2;
            range = abs(a1-a2);//絕對值

            if(range >=1 && range < n && a[range]==0)
            {
                a[range]=1;
                t++;//主要是利用這個來看是否每個數字都有到
            }
        }
        a1 = a2;
        cout << ((t == n-1 )? "jolly" : "Not jolly" )<< endl;
    }
    return 0;
}