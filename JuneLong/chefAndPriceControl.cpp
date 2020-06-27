#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        t--;
        int n,k;
        cin>>n>>k;
        int temp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp>k)
                ans = ans + temp-k;
        }
        cout<<ans<<endl;
    }
return 0;
}