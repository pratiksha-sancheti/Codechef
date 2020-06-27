#include "iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        t--;
        string s;
        cin>>s;
        int n;
        n = s.length();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='x' & s[i+1]=='y' || s[i]=='y' & s[i+1]=='x' )
            {
                count++;
                i=i+1;
            }
                
        }
        cout<<count<<endl;
    }
    
return 0;
}