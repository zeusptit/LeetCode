#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string ransomNote,magazine;
    cin >> ransomNote >> magazine;
    map<char,int>mp;
    int  i = ransomNote.length();
    for(auto it : ransomNote)mp[it]++;
    for(char x : magazine)
    {
        if(mp.count(x))
        {
            i--;
            mp[x]--;
        }
    }
    cout << i << endl;
}
/*

*/