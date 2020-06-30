#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        int i=5;
        while(n/i>=1)
        {
            count = count  + n/i;
            i=i*5;
        }
            cout<<count<<endl;
    }
}