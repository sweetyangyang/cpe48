#include <iostream>
using namespace std;



int count(int a)//因為電腦會自動用二進位儲存
{
    int count=0;
    while(a)
    {
        count += a &1; //檢查最右邊那個數字是否為1
        a >>= 1;       //消掉最右邊那個數字
    }
    return count;
}

int main()
{
    int num;
    int testnum;
    cin >> num;

    while(num--)
    {
        cin >> testnum;


        int b1 = count(testnum);

        int tempdex = stoi(to_string(testnum),nullptr,16);

        int b2 = count(tempdex);

        cout << b1 << " " << b2 << "\n";
    }
    


return 0;
}
