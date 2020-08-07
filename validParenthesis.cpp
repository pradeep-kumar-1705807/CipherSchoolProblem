#include<bits/stdc++.h>
using namespace std;
bool isValid(string str)
{
    bool flag=true;
    int n=str.length();
    stack<int> stack1;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='{'||str[i]=='['||str[i]=='(')
        {
            stack1.push(str[i]);
        }
        else if(stack1.empty()&&(str[i]==']'||str[i]==')'||str[i]=='}'))
        {
            flag=false;
            break;
        }
        else if((str[i]==']'&&stack1.top()=='[')||(str[i]=='}'&&stack1.top()=='{')||(str[i]==')'&&stack1.top()=='('))
        {
            stack1.pop();
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(!stack1.empty())
        return false;
    return flag;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string exp;
        cin>>exp;
        int result   = isValid(exp);
        if(result == true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
