///==================================================///
///                HELLO WORLD !!                    ///
///                  IT'S ME                         ///
///               BISHAL GAUTAM                      ///
///         [ bsal.gautam16@gmail.com ]              ///
///==================================================///
#include<bits/stdc++.h>
#define PI acos(-1.0)
#define X first
#define Y second
#define mpp make_pair
#define nl printf("\n")
#define SZ(x) (int)(x.size())
#define pb(x) push_back(x)
#define pii pair<int,int>
#define pll pair<ll,ll>
///---------------------
#define S(a) scanf("%d",&a)
#define P(a) printf("%d",a)
#define SL(a) scanf("%lld",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define SL2(a,b) scanf("%lld%lld",&a,&b)
///------------------------------------
#define all(v) v.begin(),v.end()
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define fr(i,a,n) for(int i=a;i<=n;i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
///int month[]={-1,31,28,31,30,31,30,31,31,30,31,30,31}; //Not Leap Year
///int dx[]= {1,0,-1,0};int dy[]= {0,1,0,-1}; //4 Direction
///int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 Direction
///int dx[]= {2,1,-1,-2,-2,-1,1,2};int dy[]= {1,2,2,1,-1,-2,-2,-1}; //Knight Direction
///==========CONSTANTS=============///
///  Digit     0123456789012345678 ///
#define MX     200003
#define inf    1000000010
#define MD     1000000007
#define eps    1e-9
///===============================///
#define _cin ios_base::sync_with_stdio(0),cin.tie(0)

int main() {
    _cin;
    int i,j,k,n,t,d;
    while( cin>>n>>t>>k>>d ) {
        int c=( n+k-1 )/k;
        int tot=(( n+k-1 )/k)*t;
        int cnt=1;
        int t1=t;
        int t2=d;
        while( cnt<c ) {
            if( t1>t2 ) {
                t2+=t;
                cnt++;
            } else {
                t1+=t;
                cnt++;
            }
        }
        int tot2=max(t1,t2);
       // cout<<tot2<< " : "<<tot<<endl;
        if( tot2<tot )cout<< "YES\n";
        else cout<<"NO\n";
    }

    return 0;
}