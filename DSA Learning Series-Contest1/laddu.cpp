#include "iostream"
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		t--;
		int n,ans=0;
		string s;
		cin>>n>>s;
		while(n)
		{
			n--;
			string str;
			cin>>str;
			if(str=="CONTEST_WON")
			{
				int rank;
				cin>>rank;
				ans = ans + 300;
				if(rank < 20)
					ans= ans + 20 - rank;
					
			}
			else if(str=="TOP_CONTRIBUTOR")
			{	
				ans = ans +300;
			}
			else if(str=="BUG_FOUND")
			{	
				int sev;
				cin>>sev;
				ans = ans + sev;
			}
			else if(str=="CONTEST_HOSTED")
			{
				ans = ans + 50;
			}
			
		}

		cout << ans / (s == "INDIAN" ? 200 : 400) << endl;
		
	}
	return 0;
}