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
#define OnBit(i) __builtin_popcount(i)
///-----------------------------------
#define S(a) scanf("%d",&a)
#define P(a) printf("%d",a)
#define SL(a) scanf("%lld",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define SL2(a,b) scanf("%lld%lld",&a,&b)
///------------------------------------
#define all(v) v.begin(),v.end()
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define fr(i,n) for(int i=a;i<=n;i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

///  Digit     0123456789012345678 ///
#define MX     500001
#define inf    2000000010
#define MD     1000000007LL
#define eps    1e-9
///===============================///

vector<int>G[MX + 2];
vector<pii>Qr[MX + 2];
int Col[MX + 2];
int SS[MX + 2];
int SC[MX + 2];
int L[MX + 2];
int n;

void PreDfs(int u, int p,int l) {
    SS[ u ] = 1;
    SC[ u ] = -1;
    L[ u ]=l;
    for(auto v : G[u]) {
        if(v == p)continue;
        PreDfs(v, u ,l+1);
        SS[u] += SS[v];
        if(SC[u] == -1 || SS[v] > SS[ SC[u] ]) {
            SC[u] = v;
        }
    }
}

bool Hvy[MX + 2];
int Cnt[MX + 2];
bool Ans[MX + 2];

void Add(int u, int p) {
    Cnt[ L[u] ]^=(1<<Col[u]);
    for(auto v : G[u]) {
        if(v == p || Hvy[v])continue;
        Add(v, u);
    }
}

void Rmv(int u, int p) {
    Cnt[ L[u] ]^=(1<<Col[u]);
    for(auto v : G[u]) {
        if(v == p || Hvy[v])continue;
        Rmv(v, u);
    }
}

void Dfs(int u, int p, int f) {
    for(auto v : G[u]) { ///CLR Light Childs
        if(v == p || v == SC[u])continue;
        Dfs(v, u, 0);
    }
    if(SC[u] != -1) Dfs(SC[u], u, 1), Hvy[ SC[u] ] = 1; ///Keep Hvy Child
    Add(u, p); ///Actual-Work in Array
    for(auto x:Qr[u]){
        int ht=x.X;
        int id=x.Y;
        Ans[id]=( OnBit( Cnt[ht] )<=1 );
    }
    if(SC[u] != -1) Hvy[ SC[u] ] = 0;
    if(!f) Rmv(u, p);
}

char s[MX + 2];
int main() {
    int x, y, q;
    S(n);
    S(q);
    for(int i = 2; i <= n; i++) {
        x = i;
        S(y);
        G[ x ].pb(y);
        G[ y ].pb(x);
    }
    scanf("%s", s + 1);
    for(int i = 1; i <= n; i++) {
        Col[i] = (s[i] - 'a');
    }
    for(int i=1; i<=q; i++) {
        S2(x,y);
        Qr[x].pb( mpp(y,i) );
    }
    PreDfs(1, -1,1);
    Dfs(1, -1, 1);
    for(int i = 1; i <= q; i++) {
        if( Ans[i] )printf("Yes\n");
        else printf("No\n");
    }
    nl;
    return 0;
}