///============================================================================///
///                                                                            ///
///                            IT'S ME                                         ///
///                         BISHAL GAUTAM                                      ///
///                  CSE,JAHANGIRNAGAR UNIVERSITY,DHAKA                        ///
///               "Follow Excellence..Success will chase U"                    ///
///                                                                            ///
///============================================================================///
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
#define pdd pair<double,double>

///==Scanning====///
#define S(a) scanf("%d",&a)
#define P(a) printf("%d",a)
#define SL(a) scanf("%lld",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define S3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define SL2(a,b) scanf("%lld%lld",&a,&b)
#define SL3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)

///==Arr,Vec Functions==///
#define all(v) v.begin(),v.end()
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define CPY(a,b) memcpy(a,b,sizeof(a))
#define MAX(a) (*max_element(all(a)))
#define MIN(a) (*min_element(all(a)))
#define fv(i,v)  for(int i=0;i<(int)v.size();i++)
#define fr(i,a,n) for(int i=a;i<=n;i++)
#define rf(i,n,a) for(int i=n;i>=a;i--)

///===Some Useful====///
#define OnBit(a) __builtin_popcountll((ll)a)
#define LB(v,k) lower_bound(v.begin(),v.end(),k)
#define _cin ios_base::sync_with_stdio(0),cin.tie(0)
#define dbg(x) cerr<<__LINE__<< ":: "<<#x<<"= "<<x<<endl
#define UNIK(v) sort(all(v)),v.resize( unique(all(v)) -v.begin() );
#define fi(n) for(__typeof(n.begin()) it=n.begin();it!=n.end();it++)
#define IO freopen("A.in","r",stdin),freopen("Out.out","w",stdout)
using namespace std;

///===TypeDefs=====///
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<pii> vii;

///===Number Theory===///
//template< class T > inline T SQR(T a) { return ((a)*(a)); }
//template< class T > inline T gcd(T a,T b) {a=abs(a);b=abs(b); if(!b) return a; return gcd(b,a%b);}
//template< class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/_gcd(a,b))*b;}
//template<typename T> T POW(T b,T p) {T r=1; while(p){if(p&1)r=(r*b);b=(b*b);p>>=1;}return r;}
//template<typename T> T BigMod(T b,T p,T m) {T r=1; while(p){if(p&1)r=(r*b)%m;b=(b*b)%m;p>>=1;}return r;}
//template<typename T> T ModInverse(T n,T m) { return BigMod(n,m-2,m); }
//
/////==GeoMetry=========///
//double DEG(double x) { return (180.0*x)/(PI);}
//double RAD(double x) { return (x*(double)PI)/(180.0);}
//template<typename T> double DIS(T a,T b){ return sqrt((double)( SQR(a.X-b.X)+ SQR(a.Y-b.Y))); }
//template<typename T> T ANGLE(T a,T b){ return atan( double(a.Y-b.Y) / double(a.X-b.X));}
//template<typename T> int isLeft(T a,T b,T c) { return (c.X-a.X)*(b.Y-a.Y)-(b.X-a.X)*(c.Y-a.Y); }
//
/////===IO-Related===///
//template< class T > void prnt(T v) { fv(i,v) {if(!i)cout<<v[i];else cout<<" "<<v[i];} cout<<endl; }
//template< class T > void BIN(T n) { if(!n){nl;return;}BIN(n/2);cout<<(n%2); }
//template<typename T> T in(){ char ch; T n = 0; bool ng = false; while (1) { ch = getchar(); if (ch == '-') { ng = true; ch = getchar(); break;} if (ch>='0' && ch<='9') break; }    while (1) { n = n*10 + (ch - '0'); ch = getchar(); if (ch<'0' || ch>'9')   break;    }  return (ng?-n:n);  }

///====Some-Stuff===///
/// atoi( str.c_str() ); // char string to int
/// sprintf(str,"%d",num);// num to char string
///int month[]={-1,31,28,31,30,31,30,31,31,30,31,30,31}; //Not Leap Year
///int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
///int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 Direction
///int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

/**************************************************************************************
 * ///////////////////////////////////////////////////////////////////////////////////*
 *************************************************************************************/

///==========CONSTANTS==============///
///  Digit     0123456789012345678  ///
#define MX     1002
#define MXX    12500005
#define inf    20000000005
#define MD     1000000007LL
#define eps    1e-9
///================================///

ll ar[MX+2],br[MX+2],w;
vector<int>G[MX+2];
vector<int>gr[MX+2];
ll aa,bb,Ws[MX+2],Bs[MX+2];
int g,vis[MX+2];

void Dfs(int u) {
    aa+=ar[u];
    bb+=br[u];
    vis[ u ]=1;
    gr[ g ].pb( u );
    for(int i=0; i<SZ( G[u] ); i++) {
        int v=G[ u ][ i ];
        if(!vis[v]) {
            Dfs(v);
        }
    }
}

ll dp[MX][MX];

ll go(int p,int sm) {
    if(sm>w) return -inf;
    if(p==g+1) {
        if( sm<=w ) return 0LL;
        else return -inf;
    }
    ll &ret=dp[p][sm];
    if(ret!=-1) return ret;
    ret=go( p+1,sm ); ///Dont take;
    for(int i=0; i<SZ( gr[p] ) ; i++) {
        int u=gr[ p ][ i ];
        ret=max( ret, br[ u ]+go( p+1,sm+ar[u] ) );
    }
    ret=max(ret, Bs[p]+go( p+1,sm+Ws[p] ) );
    return ret;
}

int main() {
    int n,m,x,y;
    S2(n,m);
    SL(w);
    fr(i,1,n) SL( ar[i] );
    fr(i,1,n) SL( br[i] );
    while(m--) {
        S2(x,y);
        G[x].pb(y);
        G[y].pb(x);
    }
    for(int i=1; i<=n; i++) {
        if(!vis[i]) {
            g++;
            aa=bb=0;
           // cout<<i<<endl;
            Dfs(i);
           // cout<<aa<< " && "<<bb<<endl;
            Ws[g]=aa;
            Bs[g]=bb;
        }
    }
    //cout<<g<<endl;
    SET(dp);
    ll ans=go(1,0);
    printf("%lld\n",ans);

    return 0;
}