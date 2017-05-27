///============================================================================///
///                                                                            ///
///                            IT'S ME                                         ///
///                         BISHAL GAUTAM                                      ///
///                  CSE,JAHANGIRNAGAR UNIVERSITY,DHAKA                        ///
///               "Follow Excellence..Success will chase U"                    ///
///                   ID: TC/CF => (BG_PeaceMind.)                             ///
///                                                                            ///
///============================================================================///
#include<bits/stdc++.h>
#define PI acos(-1.0)
#define X first
#define Y second
#define nl printf("\n")
#define SZ(x) (int)(x.size())
#define pb(x) push_back(x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define mpp make_pair

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
#define OnBit(a) __builtin_popcountll(a)
#define LB(v,k) lower_bound(v.begin(),v.end(),k)
#define _cin ios_base::sync_with_stdio(0),cin.tie(0)
#define dbg(x) cerr<<__LINE__<< ":: "<<#x<<"= "<<x<<endl
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
//template< class T > inline T SQR(T a) { return a*a; }
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
///  Digit     0123456789*#@%&^$"-  ///
#define MX     200000
#define MXX    12500005
#define inf    200000000
#define MD     1000000007LL
#define eps    1e-9
///================================///

ll n,x[MX+5],y[MX+5],ar[MX+2];
map< pair<ll,ll> ,ll>MP;
map< pair<ll,ll> ,ll>vis;
map<ll,ll>Mpx,Mpy;
int main() {
    ll i,j,k;
    _cin;
    cin>>n;
    fr(i,1,n) {
        cin>>x[i]>>y[i];
        MP[ mpp(x[i],y[i]) ]++;
    }
    ll ls=0LL,sm=0LL;
    for(i=0; i<=MX; i++)Mpx[i]=0;
    for(i=-MX; i>0; i--)Mpy[i]=0;
    fr(i,1,n)cin>>ar[i];
    int f=0;
    fr(i,1,n) {
        ll w=ar[i];
        if( w>=0 ) {
            ll xx=Mpx[ w ];
            ll yy=xx+w;

          //  cout<<xx<< " && "<<yy<<endl;
            bool ok=1;
            if( yy-1 >=0 ) {
                if( vis[ mpp(xx,yy-1) ] ==0 ) ok=0;
            }
            if( xx-1 >=0 ) {
                if( vis[ mpp(xx-1,yy) ] ==0 ) ok=0;
            }
            if( MP[ mpp(xx,yy) ] ==0 ) ok=0;
            if( !ok ) {
                f=1;
                break;
            }
            Mpx[ w ]++;
            vis[ mpp(xx,yy) ]=1;
        } else {
            ll yy=Mpy[ w ];
            ll xx=yy-w;
           // cout<<xx<< " , "<<yy<<endl;
            bool ok=1;
            if( xx-1 >=0 ) {
                if( vis[ mpp(xx-1,yy) ] ==0 ) ok=0;
            }
            if( yy-1 >=0 ) {
                if( vis[ mpp(xx,yy-1) ] ==0 ) ok=0;
            }
            if( MP[ mpp(xx,yy) ] ==0 ) ok=0;
            if( !ok ) {
                f=1;
                break;
            }
            Mpy[ w ]++;
            vis[ mpp(xx,yy) ]=1;
        }
    }
    if(f) cout<< "NO\n";
    else {
        vis.clear();
        cout<< "YES\n";
        Mpx.clear();
        Mpy.clear();
        for(i=0; i<=MX; i++)Mpx[i]=0;
        for(i=-MX; i>0; i--)Mpy[i]=0;
        fr(i,1,n) {
            ll w=ar[i];
            if( w>=0 ) {
                ll xx=Mpx[ w ];
                ll yy=xx+w;
//                bool ok=1;
//                if( yy-1 >=0 ) {
//                    if( vis[ mpp(xx,yy-1) ] ==0 ) ok=0;
//                }
//                if( xx-1 >=0 ) {
//                    if( vis[ mpp(xx-1,yy) ] ==0 ) ok=0;
//                }
//                if( !ok ) {
//                    f=1;
//                    break;
//                }
                cout<<xx<< " "<<yy<< "\n";
                Mpx[ w ]++;
                // vis[ mpp(xx,yy) ]=1;
            } else {
                ll yy=Mpy[ w ];
                ll xx=yy-w;
//                bool ok=1;
//                if( xx-1 >=0 ) {
//                    if( vis[ mpp(xx-1,yy) ] ==0 ) ok=0;
//                }
//                if( yy-1 >=0 ) {
//                    if( vis[ mpp(xx,yy-1) ] ==0 ) ok=0;
//                }
//                if( !ok ) {
//                    f=1;
//                    break;
//                }
                cout<<xx<< " "<<yy<< "\n";
                Mpy[ w ]++;
                //vis[ mpp(xx,yy) ]=1;
            }
        }
    }
    return 0;
}