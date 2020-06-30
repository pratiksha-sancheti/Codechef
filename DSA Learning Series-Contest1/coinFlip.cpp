#include "iostream"
#include <cstring> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g;
        cin>>g;
        while(g--)
        {
            int in,n,q;
            cin>>in>>n>>q;
            
            if (n % 2 == 0 || in == q)
                cout<<(n/2)<<endl;
            else
                cout<<(n/2 + 1)<<endl;
        }
    }
}