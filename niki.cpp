#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long int n,s,a=2,b=3,i;
       cin>>n;
       if(n==1)
        s=a;
       else if(n==2)
        s=b;
       else
       {
           for(i=3;i<=n;i++)
           {
               s=(a+b)%1000000007;
               a=b;
               b=s;
           }
       }
       cout<<s<<endl;
   }
   return 0;
}
