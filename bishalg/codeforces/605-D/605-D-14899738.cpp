///============================================================================///
///                                                                            ///
///                            IT'S ME                                         ///
///                         BISHAL GAUTAM                                      ///
///                  CSE,JAHANGIRNAGAR UNIVERSITY,DHAKA                        ///
///               "Follow Excellence..Success will chase U"                    ///
///                   ID: TC/CF => (BG_PeaceMind.)                             ///
///                                                                            ///
///============================================================================///
#include<algorithm>
#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<deque>
#include<climits>
#include<complex>
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
#define MX     100002
#define inf    1000000100
#define MD     1000000007LL
#define eps    1e-9
///================================///
struct data {
    int a, b, c, d, id;
    data() {};
    data(int aa, int bb, int cc, int dd, int e) {
        a = aa, b = bb, c = cc, d = dd, id = e;
    }
    bool friend operator <(data A, data B) {
         return A.a < B.a;
    }
};
data ar[MX + 5];
int n, dis[MX + 5], par[MX + 5];
pii nd[(4 * MX) + 5];

void Ins(int id, int l, int r, int p, int v) {
    if(l == r) {
        nd[id] = mpp(v, p);
        return;
    }
    int md = (l + r) >> 1, lft = (id << 1), rgt = lft + 1;
    if(p <= md) Ins(lft, l, md, p, v);
    else Ins(rgt, md + 1, r, p, v);
    nd[id] = min(nd[lft], nd[rgt]);
}

pii Qry(int id, int l, int r, int q1, int q2) {
    if(l == q1 && r == q2) return nd[id];
    int md = (l + r) >> 1, lft = (id << 1), rgt = lft + 1;
    if(q2 <= md) return Qry(lft, l, md, q1, q2);
    else if(q1 > md) return Qry(rgt, md + 1, r, q1, q2);
    else {
        pii xx = Qry(lft, l, md, q1, md);
        pii yy = Qry(rgt, md + 1, r, md + 1, q2);
        return min(xx, yy);
    }
}

int Bfs( ) {
    for(int i = 0; i <= n; i++)dis[i] = inf;
    queue<int>Q;
    Q.push(0);
    dis[0] = 0;
    int ret = inf;
   // int f = 0;
    while( !Q.empty() ) {
        int id = Q.front();
        Q.pop();
        int xx = ar[id].c, y = ar[id].d;
        int pid = ar[id].id;
        if( pid == n ) return dis[id];
        ///Bs for <=x;
        int lo = 1, hi = n, x = -1;
        while(lo <= hi) {
            int md = (lo + hi) >> 1;
            if( ar[md].a <= xx ) {
                x = max(x, md);
                lo = md + 1;
            } else hi = md - 1;
        }
       // if(!f) cout<<x<< " !!!\n";
        if(x == -1) continue;
        while(true) {
            pii p = Qry(1, 1, n, 1, x);
            if( p.X > y ) break;
            //if(!f)cout<< " - "<<p.Y<< " -- "<<p.X<<endl;
            if( dis[ p.Y ] > dis[ id ] + 1 ) {
                dis[ p.Y ] = dis[ id ] + 1;
                par[ ar[p.Y].id ] = pid;
                Ins(1, 1, n, p.Y, inf);
                Q.push(p.Y);
            }
        }
       // f=1;
    }
    return inf;
}

void go(int p) {
    if( p == 0 ) return;
    go( par[p] );
    cout << p << " ";
}

int main() {
    _cin;
    cin >> n;
    fr(i, 1, n) {
        cin >> ar[i].a >> ar[i].b >> ar[i].c >> ar[i].d;
        ar[i].id = i;
    }
    sort(ar + 1, ar + n + 1);
    fr(i, 1, n) {
        Ins(1, 1, n, i, ar[i].b);
    }
    ar[0].a = ar[0].b = ar[0].c = ar[0].d = 0, ar[0].id = 0;
    int ans = Bfs( );
    if(ans >= inf) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
        go(n);
    }
    return 0;
}