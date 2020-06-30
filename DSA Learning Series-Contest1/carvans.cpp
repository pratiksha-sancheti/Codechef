#include "iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x;
        cin>>x;
        int count=1;
        while(--n)
        {
            int temp;
            cin>>temp;
            if(temp<=x)
            {
                x=temp;
                count++;
            }
        }
        cout<<count<<endl;
    }
}