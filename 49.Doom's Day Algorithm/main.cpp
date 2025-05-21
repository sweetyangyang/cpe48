#include<iostream>

using namespace std;
//只適用在平年
//要先知道2011年1/1號星期六
int main()
{
    int num;
    cin >> num;
    int month ,days;
    int day[] = {31,28,31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string whatday[]= {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
  while(num-- )
  {
    
    cin >> month >>days;
    
    int totaldays = days -1;
    for(int i=0;i<month-1;i++)
    {
      totaldays += day[i];
    }
    cout << whatday[ (totaldays % 7)] << endl;
  }
return 0;
}