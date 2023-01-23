#include<iostream>
#include<string.h>
using namespace std;
bool check(string s){
    int count = 0;
    if(s.length()<4){
        //cout<<s.length();
        return true;
        
    }
    for(int i =0;i<s.length();i++){
       if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o'||s[i]=='u'))
            {
                count =  count + 1; 
                if(count >=4){
                    return false;
                }
            } else{
                count = 0;
            }
    }
    return true;
    
}
int main()
{
    int t,count=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        char s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        
        if(check(s)){
    cout << "yes"<<endl ;
   }
   else{
    cout << "no"<<endl;
   }

        
    } 
    return 0;
}