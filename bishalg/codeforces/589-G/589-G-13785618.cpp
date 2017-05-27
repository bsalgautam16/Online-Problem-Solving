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
#define MXX    20000000
#define inf    20000000000000LL
#define MD     1000000007LL
#define eps    1e-9
///================================///
struct data {
    int cnt,l, r;
    ll Sm;
    data() {};
};

data nd[ 7200000+2 ];
int nw,root[MX+2];

//void Merge(int u, int x, int y) {
//    nd[ u ].cnt= ( nd[ x ].cnt + nd[ y ].cnt );
//    nd[ u ].Sm = ( nd[ x ].Sm + nd[ y ].Sm );
//}

void Ins(int nn, int pn, int l, int r, int p,int v) {
    if(l == r) {
        nd[ nn ].cnt+=nd[ pn ].cnt+1;
        nd[ nn ].Sm+=nd[ pn ].Sm+(ll)v;
        return;
    }
    int md = (l + r) >> 1;
    if( p <= md ) {
        nd[ nn ].l = ++nw;
        nd[ nn ].r = nd[ pn ].r;
        Ins( nd[nn].l, nd[pn].l , l, md , p, v );
    } else {
        nd[ nn ].r = ++nw;
        nd[ nn ].l = nd[ pn ].l;
        Ins( nd[nn].r, nd[pn].r , md + 1, r , p, v );
    }
    nd[ nn ].cnt= ( nd[ nd[nn].l ].cnt + nd[ nd[nn].r ].cnt );
    nd[ nn ].Sm = ( nd[ nd[nn].l ].Sm + nd[ nd[nn].r ].Sm );
    //Merge( nn, nd[nn].l , nd[nn].r );
}

pair<ll,int> Qry(int rt,int l,int r,int q1,int q2){
    if( l==q1 && r==q2 ) return mpp(nd[rt].Sm,nd[rt].cnt);
    int md=(l+r)>>1;
    if( q2<=md ) return Qry( nd[rt].l , l,md ,q1,q2 );
    else if( q1>md ) return Qry( nd[rt].r ,md+1,r,q1,q2 );
    else {
        pair<ll,int>x=Qry( nd[rt].l, l,md, q1,md );
        pair<ll,int>y=Qry( nd[rt].r,md+1,r,md+1,q2 );
        return mpp(x.X+y.X,x.Y+y.Y);
    }
}

int n,fv,ar[MX+5],br[MX+5],MP[MX+5];
ll Ok(int r,int v,int fv) {
    ///Find How many greateor or equl to v -in range  1 to r;
    pair<ll,int>pp=Qry(root[r],1,n,fv,n);
    ll tot=(ll)pp.Y*(ll)v;
    ll totSm=pp.X;
    ll val=totSm-tot;
    //cout<<totSm<<
    return ( val );
}

pii Qr[MX+5];
int main() {
    int i, j, k, x, y, m, v, q;
    S2( q, m );
    //n=1000000;
    vector<int>vv;
    vv.resize(m);
    for(i = 1; i <= m; i++) {
        S(ar[i]);
        vv.pb( ar[i] );
    }
    fr(i,1,q){
        S2( Qr[i].X,Qr[i].Y );
        vv.pb( Qr[i].X );
    }
    //cout<< " Why SES!!\n";
    sort( all(vv) );
    vv.resize( unique( all(vv) ) -vv.begin() );
    n=SZ( vv );

    root[0]=++nw;
    for(i=1;i<=m;i++){
        x=lower_bound( all(vv),ar[i] )-vv.begin()+1;
        root[i]=++nw;
        Ins( root[i],root[i-1],1,n,x, ar[i]);
    }
    fr(i,1,q) {
        v=Qr[i].X;
        k=Qr[i].Y;
        fv=lower_bound( all(vv),v )-vv.begin()+1;
        int lo = 1, hi = m, ret = 0, val;
        while(lo <= hi) {
            int mid = (lo + hi) >> 1;
            ll vl = Ok( mid, v, fv );
            if( vl >= k ) {
                ret = mid;
                hi = mid - 1;
            } else lo = mid + 1;
        }
        printf("%d\n", ret);
    }
    return 0;
}