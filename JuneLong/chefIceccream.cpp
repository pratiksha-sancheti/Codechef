#include "iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        t--;
        int n;
        cin>>n;
        int p[3] = {0,0,0};
        int x;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x==5)
                p[0]++;
            else if(x==10)
                p[1]++;
            else if(x==15)
                p[2]++;
            
            if(x>5)
            {
                //cout<<"h"<<endl;
                int temp=x-5;
                //cout<<temp<<endl;
                if(temp==5)
                {
                    if(p[0]>=1)
                    {
                        p[0]--;
                        //cout<<"p[0]"<<p[0]<<endl;
                    }
                    else
                        flag=1;
                }
                else if(temp==10)
                {
                    
                    if(p[1]>=1)
                        p[1]--;
                    else if(p[0] >= 2)
                        p[0] = p[0] - 2;
                    else
                        flag=1;  
                }
            }
        }
        //cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<endl;
        if(flag==1)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;

    }
return 0;
}