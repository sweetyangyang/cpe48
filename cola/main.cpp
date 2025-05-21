#include <iostream>
#include<string>
using namespace std;

int main()
{
int n;
while(cin >> n)
{
    int total = n;
    int bottle = n;

while (bottle >= 3)
    {
        int morecola = bottle /3;
        total+=morecola;
        bottle = morecola + bottle%3;

    }
if (bottle ==2)
    {
        total += 1;
    }

    cout << total << endl;
}
return 0;
}