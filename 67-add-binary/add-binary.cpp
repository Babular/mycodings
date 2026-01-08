class Solution {
public:
    string addBinary(string a, string b) {
         int g=a.length();
        int m=b.length();
        int n=max(g,m);
        if (g < n) a = string(n - g, '0') + a;
        if (m < n) b = string(n - m, '0') + b; 
        bool carry=false;
        string ans="";

        for (int i=n-1;i>=0;i--){
            if(carry==false){
            if(a[i]=='1' && b[i]=='1' )
                {
                     carry=true;
                     ans+="0";
                }
                 else if (a[i]=='0' && b[i]=='0'){
                    ans+='0';

                }
                else{
                    ans+='1';
                }
            }
            else{
                 if(a[i]=='1' && b[i]=='1' )
                {
                     carry=true;
                     ans+="1";
                }
                else if (a[i]=='0' && b[i]=='0'){
                    carry=false;
                    ans+='1';

                }else{

                   carry=true;
                    ans+='0';
                }
            }
        }
         if (carry) ans += '1';
         reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};