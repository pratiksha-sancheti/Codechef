#include "iostream"
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t)
    {
        t--;
        long long int ts;
        cin>>ts;
        int count=0;
        for(long long int i=1;i<=ts;i++)
        {
            if(i%2==0 & ts%2==0)
            {
                i=int(i/2);
                ts=int(ts/2);
            }
            if(ts%2==1 & i%2==0)
                count++;
        }
        cout<<count<<endl;  
    }
return 0;
}