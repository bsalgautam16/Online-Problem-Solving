///==================================================///
///                HELLO WORLD !!                    ///
///                  IT'S ME                         ///
///               BISHAL GAUTAM                      ///
///         [ bsal.gautam16@gmail.com ]              ///
///==================================================///
#include<bits/stdc++.h>
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

///  Digit     0123456789012345678 ///
#define MX     100001
#define inf    2000000010
#define MD     1000000007LL
#define eps    1e-9
///===============================///

vector<int>G[MX+2];
int Col[MX+2];
int SS[MX+2];
int SC[MX+2];
int n,tmm;

void PreDfs(int u,int p) {
    SS[ u ]=1;
    SC[ u ]=-1;
    for(int i=0; i<SZ( G[u] ); i++) {
        int v=G[ u ][ i ];
        if(v==p)continue;
        PreDfs( v,u );
        SS[u]+=SS[v];
        if( SC[u]==-1 || SS[v]>SS[ SC[u] ] ) {
            SC[u]=v;
        }
    }
}

bool Hvy[MX+2];
ll Cnt[MX+2];
ll Ans[MX+2];
ll SmC;
ll MxFr;

void Add(int u,int p) {
    Cnt[ Col[u] ]++;
    int cc=Cnt[ Col[u] ];
    if(cc==MxFr)SmC+=Col[u];
    else if(cc>MxFr ) {
        MxFr=cc;
        SmC=Col[u];
    }
    for(int i=0; i<SZ( G[u]); i++) {
        int v=G[u][i];
        if( v==p || Hvy[v] )continue;
        Add( v,u );
    }
}

void Rmv(int u,int p) {
    Cnt[ Col[u] ]=0;
    for(int i=0; i<SZ( G[u]); i++) {
        int v=G[u][i];
        if( v==p || Hvy[v])continue;
        Rmv( v,u );
    }
}

void Dfs(int u,int p,int f) {
    for(int i=0; i<SZ( G[u]); i++) {///CLR Light Childs
        int v=G[u][i];
        if( v==p || v==SC[u] )continue;
        Dfs(v,u,0);
    }
    if( SC[u]!=-1 ) Dfs( SC[u],u,1 ),Hvy[ SC[u] ]=1;///Keep Hvy Child
    Add(u,p);///Actual-Work in Array
    Ans[ u ]=SmC;
    if( SC[u]!=-1 ) Hvy[ SC[u] ]=0;
    if(!f) Rmv(u,p),MxFr=SmC=0;
}

int main() {
    int x,y;
    S(n);
    for(int i=1; i<=n; i++) {
        S(Col[i]);
    }
    for(int i=1; i<=n-1; i++) {
        S2(x,y);
        G[ x ].pb( y );
        G[ y ].pb( x );
    }
    tmm=0;
    PreDfs(1,-1);
    //cout<<tmm<<endl;
//    for(int i=1;i<=n;i++){
//        cout<<St[i]<< " && "<<Ed[i]<< " "<<SS[i]<< " && "<<SC[i]<<endl;
//        cout<<Col[i]<<endl;
//    }
    Dfs(1,-1,1);
    for(int i=1; i<=n; i++) {
        printf("%lld ",Ans[i]);
    }
    nl;
    return 0;
}