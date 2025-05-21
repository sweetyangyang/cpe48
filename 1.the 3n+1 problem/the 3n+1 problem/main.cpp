#include <iostream>
using namespace std;

int lenth(int num)
{
    int cycle =0;
    while(num!=1)
    {
        cycle+=1;
        if((num%2)==0)
        {
            num=num/2;
        }
        else
            num=3*num+1;
    }
    return cycle += 1;
}

int main()
{
    int temp=0;
    int a,b,max,min;
    while(cin >> a >> b)
    {
        temp=0;//每次都要重製成0不然上一次的會影響下一次的
        cout<< a << " " << b << " ";
        if(a>b)
        {
            max=a;
            min=b;
        }
        else
        {
            max=b;
            min=a;
        }
        for(int a=min;a<=max;a++)
        {
            if((lenth(a))>temp)
            {
                temp=lenth(a);
            }
        }
        cout << temp<< endl;
    }
    return 0;
}
