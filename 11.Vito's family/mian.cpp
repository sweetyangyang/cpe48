#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    cin >> num;


    while(num>0)
    {
        int r;
        int home;
        cin >> r;
        vector <int > s(r);

        for(int i=0;i<r;i++)
        {
            cin >> s[i];
        }
        sort(s.begin(),s.end());
        if(r%2==1)
        {
            home = s[r/2];
        }
        else
        {
            home = (s[r/2-1]+s[r/2])/2;
        }

        num--;
    }
}


