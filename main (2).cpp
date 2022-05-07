#include <iostream>
#include <stdlib.h>
using namespace std;
int a;
char b;
int e;
int main()
{
    while(1)
    {
        cout<<"Press 1 to calculator, press any other key to exit : ";
        cin>>a;
        system("clear");
        switch (a)
        {
            case 1:
            {
                cout<<"Enter quation like this: 12 + 59 : ";
                cin>>a>>b>>e;
                system("clear");
                cout<<a<<b<<e<<endl;
                switch(b)
                {
                    case '*':{a=a*e;break;}
                    case '/':{if (e==0)
                              {break;}
                              else
                              {a=a/e;break;}}
                    case '-':{a=a-e;break;}
                    case '+':{a=a+e;break;}
                    default:{cout << "Wrong action. Use only /*-+" << endl;b='/';e=0;}
                }
                break;
            }
            default:{exit(1);}
           
        }
        if (b=='/' && e==0)
        {cout<<"Answer undefined "<<endl;}
        else
        {cout<<"Answer = "<<a<<endl;}
    }
    
}
