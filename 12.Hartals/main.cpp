#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int num;//偶幾筆資料

    cin >> num;
    while(num>0)
    {
        int days=0;//總共有幾天
        int party=0;//有多少個政黨
        cin >> days >> party;

        vector <int> week(days+1);//看有沒有人罷工
        int totalnum=0;//罷工總數
        int strike=0;//罷工週期
        
        for(int i=0;i<party;i++)//給我幾個政黨其實就是要看要把多少次迴圈
        {
            cin >> strike;
            for(int y=strike ;y<=days ; y+=strike)
            {
                if(y%7==6 ||y%7==0)
                {
                    continue;//結束這個迴圈接著下一個迴圈
                }
                if(week[y]==0)
                {
                    totalnum++;
                    week[y]=1;
                }
            }
        }
        cout << totalnum << endl;

        num--;
    }
    return 0;
}