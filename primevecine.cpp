#include <iostream>

using namespace std;
void sub(int &n,int &a,int &b)
{
    int d,prim,i;
    i=n;
    do
    {
        i--;
        prim=1;
        if(i==1)
            prim=0;
        else
            if(i%2==0 && i!=2)
                prim=0;
            else
                for(d=3;d*d<=i;d++)
                {
                    if(i%d==0)
                        {
                            prim=0;
                            break;
                        }
                }

        if(prim==1)
            {
                a=i;
                break;
            }
    }while(prim==0);
    i=n;
    do
    {
        i++;
        prim=1;
        if(i==1)
            prim=0;
        else
            if(i%2==0 && i!=2)
                prim=0;
            else
                for(d=3;d*d<=i;d++)
                {
                    if(i%d==0)
                        {
                            prim=0;
                            break;
                        }
                }
        if(prim==1)
            {
                b=i;
                break;
            }
    }while(prim==0);
}