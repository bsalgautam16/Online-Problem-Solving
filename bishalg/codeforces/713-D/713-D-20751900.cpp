///==================================================///
///                HELLO WORLD !!                    ///
///             IT'S ME BISHAL GAUTAM                ///
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
#define min(a,b) ((a<b)?a:b)
#define max(a,b) ((a>b)?a:b)
///-------------------------
#define S(a) scanf("%d",&a)
#define P(a) printf("%d",a)
#define SL(a) scanf("%lld",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define SL2(a,b) scanf("%lld%lld",&a,&b)
///-------------------------------------
#define all(v) v.begin(),v.end()
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define fr(i,a,n) for(int i=a;i<=n;i++)

using namespace std;
typedef long long ll;

///  Digits    0123456789012345678 ///
#define MX     1015
#define inf    1000000010
#define MD     1000000007LL
#define eps    1e-9
///===============================///
#define LG 11

int n,m;
int dp[LG][LG][MX+2][MX+2],ar[MX+2][MX+2],Log2[MX+2];

void RmQ2D( ) {
    Log2[1] = 0;
    for(int i=2; i<=MX ; i++) {
        Log2[i] = Log2[i >> 1] + 1;
    }
    for(int x = 0 ; x < LG ; x++) {
        for(int y = 0 ; y < LG ; y++) {
            for(int i = 1 ; i + (1 << x) - 1 <= n ; i++) {
                for(int j = 1 ; j + (1 << y) - 1 <= m ; j++) {
                    if(x + y == 0) {
                        dp[x][y][i][j] = ar[i][j];
                    }  else if(y == 0) {
                        dp[x][y][i][j] = max(dp[x-1][y][i][j] , dp[x-1][y][i + (1 << (x - 1))][j]);
                    } else {
                        dp[x][y][i][j] = max(dp[x][y-1][i][j] , dp[x][y-1][i][j + (1 << (y - 1))]);
                    }
                }
            }
        }
    }
}

int Qry2D(int a,int b,int c,int d) {
    int k1=Log2[c-a+1];
    int k2=Log2[d-b+1];
    int mx=max( dp[k1][k2][a][b] , dp[k1][k2][a][d - (1 << k2) + 1] );
    mx=max( mx,max(dp[k1][k2][c-(1 << k1)+1][b] ,dp[k1][k2][c-(1<<k1)+1][d -(1<<k2)+1]) );
    return mx;
}


int main() {
    int x,y,a,b,c,d,q;
    S2(n,m);
    fr(i,1,n) {
        fr(j,1,m) {
            S(x);
            if(x)ar[i][j]=min(ar[i][j-1],min(ar[i-1][j],ar[i-1][j-1]))+1;
        }
    }
    RmQ2D();
    S(q);
    while(q--) {
        S2(a,b);
        S2(c,d);
        int lo=1,hi=min( c-a+1,d-b+1 ),ret=0;
        while(lo<=hi) {
            int md=(lo+hi)>>1;
            x=(a+md-1),y=(b+md-1);
            if( Qry2D(x,y,c,d)>=md ) {
                ret=max(ret,md);
                lo=md+1;
            } else hi=md-1;
        }
        printf("%d\n",ret);
    }
    return 0;
}