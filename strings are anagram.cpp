#include <bits/stdc++.h>
using namespace std;
    bool isAnagram(string s, string t) {
        int smp[26]={0},tmp[26]={0};
        if(s.size()!=t.size()) return false;
        for(int i=0; i<s.size(); i++) {
              smp[s[i]-'a']++;
              tmp[t[i]-'a']++;
        }
        for(int i=0; i<26; i++) {
             if(smp[i]!=tmp[i]) return false;
        }
        return true;
    }


 int main()
{
    string s,t;
    cout<<"enter the both string";
    cin>>s>>t;
    if(isAnagram(s,t))
    {
        cout<<"is anagram";
    }
    else
    {

    cout<<"is not anagram";
    }
  return 0;
}
