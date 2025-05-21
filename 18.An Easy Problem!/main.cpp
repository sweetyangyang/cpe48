#include<iostream>

using namespace std;


int main()
{
    string value = "";

    while(getline(cin,value))
    {
        int sum = 0;//每一個數字加起來
        int temp=0;//存放每次輸出的值
        int max=0;//用來存放每一串最大的數字
        for(int i=0;i<value.size();i++)
        {
            if(value[i]>='0'&&value[i]<='9')
            {
                temp = value[i] - '0';
            }
            else if(value[i]>='A'&&value[i]<='Z')
            {
                temp = value[i] - 'A' + 10;
            }
            else if(value[i]>='a'&&value[i]<='z')
            {
                temp = value[i] - 'a' + 36;
            }
            else 
            {
                continue;
            }
            if(temp > max)
            {
                max = temp;
            }
            sum += temp; 
        }

        for(int i = max ;i <= 62 ;i++)
        {
            if((sum%i)==0)
            {
                cout << i+1 << endl;
                break;
            }
            if(i == 62)
            {
                cout << "such number is impossible!" << endl;
                break;
            }
        }

    }
    return 0;
}