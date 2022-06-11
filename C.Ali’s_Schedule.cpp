#include <bits/stdc++.h>

#define clr(str , charr) memset(str,charr, sizeof(str))
using namespace  std;
using namespace std::chrono;

const int mod =  1e9 +5;

#define test int t; cin>>t; while(t--)
#define print( i , output ) cout << "Case #" << i << ": " << output ;

#define ll long long
#define pi 3.1415926


#define l length()
#define preci(x) cout << fixed<<setprecision(x)
#define infmax LONG_LONG_MAX
#define infmin LONG_LONG_MIN
#define bit __builtin_popcountll /*It returns the numbers of set bits in an integer 
(the number of ones in the binary representation of the integer).*/

#define all(v)			(v).begin(),(v).end()
#define sz(v)			(((int)((v).size())))
void fast(){
 ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
}



void solve ()
{
    int n; cin>>n; 
    vector<pair <string  , int > >AM;
    vector<pair <string  , int > >PM;
    
    for (int i=0 ; i<n ; ++i)
    {
        int x; string str1 ,str2; 
        cin>>x>>str1>>str2;
        
        if(str2 == "AM")AM.push_back({str1 , x });
        else PM.push_back({str1 , x });
    }
    
    sort(PM.begin() , PM.end());
    sort(AM.begin() , AM.end());
    
    for(auto f : AM)cout << f.second << " ";
    for(auto f : PM)cout << f.second << " ";
    
    
    cout << "\n";
}


int main() 
{
  freopen ("schedule.in","r",stdin);
  fast();
  test
  solve();
  //calctime();
}
