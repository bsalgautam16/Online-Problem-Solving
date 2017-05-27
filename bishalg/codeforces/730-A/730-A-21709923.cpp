/*****************************************************************
 *                   BISMILLAHIR RAHMANIR RAHIM                  *
 *                           JU_Circavex                         *
 *****************************************************************/

#include<bits/stdc++.h>

//#include<algorithm>
//#include<cstdio>
//#include<sstream>
//#include<cstdlib>
//#include<cctype>
//#include<cmath>
//#include<set>
//#include<queue>
//#include<stack>
//#include<list>
//#include<iostream>
//#include<fstream>
//#include<numeric>
//#include<string>
//#include<vector>
//#include<cstring>
//#include<map>
//#include<iterator>
//#include<deque>
//#include<climits>
//#include<complex>

#define S scanf
#define P printf
#define DI(X) int (X);             scanf("%d", &X)
#define DII(X, Y) int X, Y;        scanf("%d%d", &X, &Y)
#define DIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define DILL(X) LL (X); scanf("%lld", &X)

#define LL long long int
#define ULL unsigned long long int
#define D double

#define all(a) a.begin(),a.end()
#define X  first
#define Y  second
#define MP make_pair
#define NL P("\n")

#define PB(x)      push_back(x)
#define PS(x)      push(x)
#define sz()       size()
#define UB         upper_bound
#define LB         lower_bound
#define countbit(x) __builtin_popcount(x)

#define MEM(a,val) memset(a,val,sizeof(a));
#define SET(a)     memset(a,-1,sizeof a)
#define CLR(a)     memset(a,0,sizeof a)

using namespace std;


#define ll long long int
#define ull unsigned long long int
#define inf (1<<30)
#define linf (1LL<<62)
#define sc(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sc4(a,b,c,d) scanf("%d%d%d%d",&a,&b,&c,&d)
#define f(i,n) for(i=0;i<n;i++)
#define fl(c,i,n) for(i=c;i<n;i++)
#define mem(a) memset(a,0,sizeof(a))
#define memn(a) memset(a,-1,sizeof(a))
#define aov(a) a.begin(),a.end()
#define pb push_back
#define PI (2.0*acos(0.0)) //#define PI acos(-1.0)
#define pll pair< ll , ll >
#define pii pair< int , int >
#define mpr make_pair
#define xx first
#define yy second
#define nl puts("")
#define endl '\n'
#define dbg(x) cerr<<#x<<" : "<<x<<endl
#define mpp make_pair
#define SZ(x) (int)(x.size())
#define fr(i,a,n) for(int i=a;i<=n;i++)

template <typename T> T BigMod (T b,T p,T m)
{
    if (p == 0) return 1;
    if (p%2 == 0)
    {
        T s = BigMod(b,p/2,m);
        return ((s%m)*(s%m))%m;
    }
    return ((b%m)*(BigMod(b,p-1,m)%m))%m;
}
template <typename T> T ModInv (T b,T m)
{
    return BigMod(b,m-2,m);
}
template <typename T> T POW(T B,T P)
{
    if(P==0) return 1;
    if(P&1) return B*POW(B,P-1);
    else return SQR(POW(B,P/2));
}
template <typename T> LL isLeft(T a,T b,T c)
{
    return (a.x-b.x)*(b.y-c.y)-(b.x-c.x)*(a.y-b.y);
}
template <class T> inline T bigmod(T p,T e,T M)
{
    ll ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
}
template <class T> inline T gcd(T a,T b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
template <class T> inline T modinverse(T a,T M)
{
    return bigmod(a,M-2,M);
}   // M is prime}
template <class T> inline T bpow(T p,T e)
{
    ll ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p);
        p = (p * p);
    }
    return (T)ret;
}

int    Set(int N,int pos)
{
    return N=N | (1<<pos);
}
int  Reset(int N,int pos)
{
    return N= N & ~(1<<pos);
}
bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}

#define VI  vector< int >
#define VII vector< VI >
#define VLL vector< LL >
#define PII pair< int , int >
#define PLL pair< LL , LL >
#define VPI vector< PII >

///         0123456789
#define MX  202
#define MOD 1000000007
#define eps 1e-9

/// Hashing Bases & MOD
///           0123456789
#define Base1 10000019ULL
#define Base2 10000079ULL
#define Base3 10000103ULL
#define MOD1  1000000007ULL
#define MOD2  1000000009ULL
#define MOD3  1000000021ULL
#define LOGX  17
#define FCIN  ios_base::sync_with_stdio(0); cin.tie(0)

///int mnth[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};  //Not Leap Year
///int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
///int dx[]={-1,+1,0,1,0,-1}; // Hexagonal Direction   **
///int dy[]={-1,+1,1,0,-1,0}; //                       *#*
///                                                     **
///int dx[]={0,1,0,-1};int dy[]={1,0,-1,0}; //4 Direction

int ts, kk = 1;

#define M  100005
#define MD 1000000007LL

int ar[10002][102],Sm[10002],Cl[10002];
int n,vl[20002];
int main()
{
    int i,j,k,r,c,x,y,rw;
    sc(n);
    int mn=100;
    fr(i,1,n)sc(vl[i]),mn=min(mn,vl[i]);
    bool ok=0;
    // cout<<mn<< ": Min\n";
    for(x=mn; x>=1; x--)
    {
        rw=0;
        CLR(Sm);
        CLR(Cl);
        CLR(ar);
        for(i=1; i<=n; i++)
        {
            y=( vl[i]-x );
            r=1;
            // cout<<i<< " => "<<y<<endl;
            while( y-- )
            {
                for( ; ; r++)
                {
                    if( Sm[r]<=4 )
                    {
                        ar[ r ][ i ]=1;
                        Cl[ r ]=i;
                        Sm[ r ]++;
                        rw=max(rw,r);
                        r++;
                        //cout<<r<< " --- "<<r<<endl;
                        break;
                    }
                }
            }
        }

        int f=1;
        //cout<<rw<<endl;
        for(r=rw; r>=1; r--)
        {
            if( Sm[r]==1 )
            {
                int c=Cl[ r ];
                int dn=0;
                //cout<<r<< " -- "<<c<<endl;
                for(k=1; k<=r-1; k++)
                {
                    if( Sm[k]<=2 )continue;
                    for( j=1; j<=n; j++ )
                    {
                        if( j==c )continue;
                        if( ar[ k ][ j ]==1 )
                        {
                            ar[ r ][ j ]=1;
                            Sm[ k ]--;
                            Sm[ r ]++;
                            ar[ k ][ j ]=0;
                            dn=1;
                            break;
                        }
                    }
                    if(dn)break;
                }
                if(!dn)
                {
                    f=0;
                    break;
                }
            }
        }
        if( f )ok=1;
        if( ok )break;
    }
    if( !ok )
    {
        /// Greedy for zero!!
        //cout<< "Greedy for Zero\n";
        printf("%d\n%d\n",0,100*(n-1));
        int c=1;
        int tot=100*(n-1);
        CLR(ar);
        for(i=1; i<=tot; i++)
        {
            ar[i][c]=ar[i][c+1]=1;
            if( i%100==0 )c++;
        }
        for(i=1; i<=tot; i++)
        {
            for(j=1; j<=n; j++)
            {
                printf("%d",ar[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        assert(rw<=10000);
        printf("%d\n%d\n",x,rw);
        for(i=1; i<=rw; i++)
        {
            for(j=1; j<=n; j++)
            {
                printf("%d",ar[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}