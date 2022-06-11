#include <bits/stdc++.h>

#define clr(str , charr) memset(str,charr, sizeof(str))
using namespace  std;


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

bool isp(ll a)
{
  if (a == 2)return 1; if (a%2 == 0|| a==1)return false;
  for (ll i =3 ; i*i<=a ; i+=2)if (a %i ==0)return false;
  return true;
}


const int N = 1000007;
int arr[N];
bool vis[N];

void solve ()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr, arr + n);
    int ans =0;
    for (int i = 0; i < n; ++i) {
        if (!vis[arr[i]]) {
            ans++;
            for (int j = arr[i]; j < N; j += arr[i])
                vis[j] = true;
        }
    }
    cout << ans;

}


int main() 
{
  //freopen("erase.in", "r", stdin);
  fast();
  test
  solve();
  //calctime();
}
