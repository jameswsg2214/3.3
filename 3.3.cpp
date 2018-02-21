#include <iostream>
#include <string>
using namespace std;
class sample{
    public:
    int i,n,max;
    int a[1000];
    int get()
    {
        cin>>n;
      for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    int calc()
    {
        max=a[0];
        for(i=0;i<n;i++)
{
if(a[i]<max)
{
max=a[i];
}
}
cout<<max;      
return 0;    
    }
};
int main()
{
sample s;
s.get();
s.calc();
return 0;
}
