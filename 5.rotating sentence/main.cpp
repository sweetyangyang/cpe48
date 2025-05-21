#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s[101];    //題目說不會超過100行
    int howmanyline=0;
    int max=0;

    while(getline(cin,s[howmanyline]))//找最長的有幾個max

    {
        if(s[howmanyline].length() > max)
        {
            max = s[howmanyline].length();
        }
    
            howmanyline++;//看有幾行      
    }
    for(int i = 0 ;i < max ;i++)//每一行裡面的內容
    {
        for(int j = howmanyline-1 ; j >= 0 ; j-- )//一行一行輸入
        {
            if(s[j].length()>i)
            {
                cout << s[j][i];
            }   
            else
            {
                cout << ' ' ;
            }
        }
        cout << endl;
    }
return 0;
}
//最後要按control d才可以執行