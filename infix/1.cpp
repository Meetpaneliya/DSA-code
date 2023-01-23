#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,m=0,a=0;
        cin>>n>>x;
           m = pow(2,x);
        for(int i=1; i<=n; i++)
        {
           m =m/2;
          
        }
        return m;
    }
	// your code goes here
	return 0;
}
