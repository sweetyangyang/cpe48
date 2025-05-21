#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        vector <int > number(n);
        for(int i=0;i < n;i++)
        {
            cin >> number[i];
        }
        sort(number.begin(),number.end());

        int mid1 = number[n/2];//這個值算出會比較大
        int mid2 = number[(n-1)/2];//這個算出來的值會比較小
        //不管奇數或是偶數都可以算兩個因為基數時候會一樣

        int possible = ((n%2)==0) ? 2:1;
        int count = 0;
        for(int x=0;x < n ;x++)
        {
            if(number[x]==mid1 || number[x]==mid2)
            {
                count++;
            }
        }
        cout << mid2 << " " << count <<  " " << mid1 - mid2 + 1 << endl;
    }
    return 0;
}