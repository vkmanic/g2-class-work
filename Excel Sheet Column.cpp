#include <bits/stdc++.h>
using namespace std;
string convertToTitle(int colNum) {
        string s;
        int x=0;
        while(colNum){
        x=colNum%26;colNum/=26;
        if(x<=0){ x+=26; colNum--;}
        s.push_back('A'+x-1);
        }
        reverse(s.begin(),s.end());
        cout<< s;

    }
int main()
{
    convertToTitle(27);
  return 0;
}
