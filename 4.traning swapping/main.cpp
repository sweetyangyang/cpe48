#include <iostream>
#include <vector>
#include <algorithm>
//利用bubble sort
//cin遇到空格就會結束
using namespace std;

int bubblesort(vector<int> &array)
{
    int swaptime=0;
    int nums = array.size();
    for(int i=0;i<nums-1;i++)
    {
        for(int y=0;y<nums-1-i;y++)
        {
            if(array[y]>array[y+1])
            {
                swap(array[y],array[y+1]);
                swaptime+=1;
            }
        }
    }

    return swaptime;

}

int main()
{
int total;
cin >> total;

    while( total > 0)
    {
        int num;
        cin >> num;

        vector<int> train(num);
        for(int x=0; x<num ;x++)
        {
            cin >> train[x];
        }

        int times = bubblesort(train);
        
        cout << "Optimal train swapping takes " << times << " swaps." << endl;

        total--;
    }
    return 0;
}
