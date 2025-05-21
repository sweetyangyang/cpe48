#include <iostream>
#include <string>
#include <set>
using namespace std;

bool flag = false;//判斷有無出界

const int dx[4]={0,1,0,-1};//面向哪裡走一步 n e s w
const int dy[4]={1,0,-1,0};

int main()
{
    int max_x;
    int max_y;
    int x;
    int y;
    char direction;
    int newx;
    int newy;
    set <pair<int,int>> scent;//會出界的地方

    cin >> max_x >>max_y;

    while(cin >> x >> y >> direction)
    {
        string commands;
        cin >> commands;

        int dir;
        if(direction == 'N')
        {dir = 0;}
        if(direction == 'E')
        {dir = 1;}
        if(direction == 'S')
        {dir = 2;}
        if(direction == 'W')
        {dir = 3;}

        for(char command : commands)
        {
            if(command == 'L')
            {
                dir = (dir+3)%4;
            }
            else if(command == 'R')
            {
                dir = (dir+1)%4;
            }
            else if(command == 'F')
            {
                newx = x + dx[dir];
                newy = y + dy[dir];
                if( newx < 0|| newx > max_x || newy < 0|| newy > max_y )
                {
                    if(scent.count({x,y})==0)
                    {
                            scent.insert({x,y});
                            flag = true;
                            break;
                    }
                }
                else
                {
                    x= newx;
                    y= newy;
                }

            }
            
        }
        cout << x << ' ' << y << ' ' ;
        if (dir == 0) cout << "N";
        else if (dir == 1) cout << "E";
        else if (dir == 2) cout << "S";
        else if (dir == 3) cout << "W";
        if (flag) 
        {cout <<  ' ' << "LOST" ;}
        cout << endl;
        flag = false;
    }
}