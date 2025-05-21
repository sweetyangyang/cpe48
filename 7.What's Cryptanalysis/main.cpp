#include <iostream>
#include <cctype>//使用toupper isalpha
#include <vector>
#include <algorithm>//sort
//size_t是無符號的時候int是有符號的時後兩種狀態不可以互相比較
using namespace std;

bool cmp(pair<char,int> a,pair <char ,int> b)
{
    if(a.second!=b.second)
    {
        return a.second > b.second;
    }
    else
    {
        return a.first < b.first;
    }
}


int main()
{
    
    int num;
    cin >> num;
    cin.ignore();//跳過/n
    vector<int>  f(26,0);
    while(num--)
    {   
       
        string alpha;
        getline(cin,alpha);//用來存每一行獨到的資料
        
        for(size_t i=0;i<alpha.size();i++)
        {
            if(isalpha(alpha[i]))
            {
                f[toupper(alpha[i])-'A']++;
            }
        }
    }
        vector< pair<char,int> > result;
        for(int i=0 ;i<26;i++)//先放進來還沒有排序
        {
            if(f[i]!=0)
            {
                result.push_back( pair<char,int>('A'+i,f[i]) );
            }
        }

        sort(result.begin(),result.end(),cmp);

        for(size_t i=0;i<result.size();i++)
        {
            cout << result[i].first << " " << result[i].second << endl;
        }
    
    return 0;
}