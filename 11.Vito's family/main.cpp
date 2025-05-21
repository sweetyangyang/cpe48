#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n>0)
    {
        int home=0;
        int totaldistance=0;
        int r;//每一戶親戚的門牌
        cin >> r;


        vector<int> s(r);

        for(int i=0;i<r;i++)
        {
            cin >> s[i];
        }

        sort(s.begin(),s.end());//從小排到大

        if(r%2 == 1)
        {
            home = s[r/2];
        }
        else
        {
            home = (s[r/2-1] + s[r/2])/2;
        }
        
        for(int i=0;i<r;i++)
        {
            totaldistance = totaldistance + abs(home - s[i]);
        }

        
        cout << totaldistance << endl;
        n--;
    }
    return 0;
}