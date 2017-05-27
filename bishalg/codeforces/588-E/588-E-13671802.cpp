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
template< class T > void prnt(T v) {
    fv(i,v) {
        if(!i)cout<<v[i];
        else cout<<" "<<v[i];
    }
    cout<<endl;
}
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
#define inf    2000000000
#define MD     1000000007
#define eps    1e-9
///================================///

vector<int>G[MX+2],vl[MX+2],ans,tmp;
vector<int>dp[MX+2][18];
int n,P[MX+2][18],L[MX+2];

void Dfs(int u,int p,int l) {
    L[u]=l;
    P[u][0]=p;
    for(int i=0; i<SZ( vl[u] ) && i<10 ; i++ ){
            dp[u][0][i]=vl[u][i];
    }
    for(int i=0; i<SZ( G[u] ); i++) {
        int v=G[u][i];
        if( v==p )continue;
        Dfs( v, u ,l+1 );
    }
}

void MY_merge(vector<int>&a, vector<int>&b, vector<int>&c) {
    int i=0,j=0,k=0;
    while(i<10 && j<10 && k<10) {
        if( a[i]<=b[j] )c[k++]=a[i++];
        else c[k++]=b[j++];
    }
}

void MY_merge2(vector<int>&a, vector<int>&b) {
    int i=0,j=0,k=0;
    vector<int>c(10,inf);
    while(i<10 && j<10 && k<10) {
        if( a[i]<=b[j] )c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    fr(i,0,9)a[i]=c[i];
}

void PrePar( ) {
    for(int i=1; i<=17; i++) {
        for(int j=1; j<=n; j++) {
            if( P[j][i-1]==-1 ) continue;
            P[ j ][ i ]=P[ P[j][i-1] ][ i-1 ];
            MY_merge(  dp[j][i-1]  ,dp[ P[j][i-1] ][i-1] , dp[j][i] );
        }
    }
}

int Kth(int x,int k) {
    for(int i=17; i>=0; i--) {
        if( (1<<i) <=k ) {
            MY_merge2( ans, dp[x][i] );
            x=P[x][i];
            k-=(1<<i);
        }
    }
    return x;
}

int LCA(int x,int y) {
    ans.clear();
    ans.resize(10,inf);
    if( L[x]<L[y] ) swap(x,y);
    int k=(L[x]-L[y]);
    x=Kth(x,k);
    if(x==y) return x;
    for(int i=17; i>=0; i--) {
        if( P[x][i]!=P[y][i] ) {
            MY_merge2( ans, dp[x][i] );
            MY_merge2( ans, dp[y][i] );
            x=P[x][i];
            y=P[y][i];
        }
    }
    MY_merge2( ans, dp[x][0] );
    MY_merge2( ans, dp[y][0] );
    return P[x][0];
}

int main() {
    int i,j,k,q,m,x,y,z;
    S3(n,m,q);
    fr(i,1,n-1) {
        S2(x,y);
        G[x].pb(y);
        G[y].pb(x);
    }
    fr(i,1,m) {
        S(x);
        vl[ x ].pb(i);
    }
    fr(i,1,n)sort( all(vl[x]) );
    //cout<< " Ses!!\n";
    fr(i,0,17)fr(j,1,n)dp[j][i].resize(10,inf);
    SET(P);
    Dfs(1,-1,1);
    PrePar( );
    while(q--) {
        S2(x,y);
        S(z);
        int xx=LCA(x,y);
      //  cout<<x<< " "<<y<< " => "<<xx<<endl;
        MY_merge2( ans, dp[xx][0] );
        int cnt=0;
        fr(i,0,z-1) {
            if( ans[i] ==inf )break;
            cnt++;
            //cout<<ans[i]<< " ";
        }
        printf("%d",cnt);
        fr(i,0,cnt-1) {
            printf(" %d",ans[i]);
        }
        nl;
    }
    return 0;
}