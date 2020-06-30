#include "iostream"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int k,d0,d1;
        cin>>k>>d0>>d1;
        long long int S;
        int a,b,c,d;
        if(k==2)
            S = d0 + d1;
        S = d0 +d1 +((d0+d1)%10);
        if(k>3)
        {
            a = ((d0 + d1) << 1) % 10;
            b = ((d0 + d1) << 2) % 10;
            c = ((d0 + d1) << 3) % 10;
            d = (6 * (d0 + d1)) % 10;
        
        S += ((a + b + c + d) * ((k - 3) >> 2));      
        if((k-3)%4 == 1)
            S = S+a;
        else if((k-3)%4 == 2)
            S = S+a+b;
        else if((k-3)%4 == 3)
            S = S+a+b+c;
        }
        if(S%3==0)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }

}