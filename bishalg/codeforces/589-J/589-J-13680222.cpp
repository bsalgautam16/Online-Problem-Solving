///==========================================================================
///
///                   Bismillah ir-Rahman ir-Rahim
///
/// ==========================================================================
///
///                    S.M.SHAHEEN SHA
///
///                    Dept. of Computer Science and Engineering
///                    Jahangirnagar University , Bangladesh
///
///                    Email : shaheen.cse20@gmail.com
///                    ID    : shaheen_bd
/// ==========================================================================

//#include<bits/stdc++.h>

#include <algorithm>
#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include <deque>
#include <climits>
#include <complex>

using namespace std;

#define LL                          long long
#define ULL                         unsigned long long

// I/O
#define I(X)                        scanf("%d",     &(X))
#define II(X, Y)                    scanf("%d%d",   &(X), &(Y))
#define III(X, Y, Z)                scanf("%d%d%d", &(X), &(Y), &(Z))

#define DI(X) int (X);              scanf("%d",     &X)
#define DII(X, Y) int X, Y;         scanf("%d%d",   &X, &Y)
#define DIII(X, Y, Z) int X, Y, Z;  scanf("%d%d%d", &X, &Y, &Z)

#define IL(x)                       scanf("%lld", &x)
#define IIL(x,y )                   scanf("%lld", &x,&y)
#define IIIL(x,y,z)                 scanf("%lld", &x,&y,&z)

#define DIL(x)       LL x;          scanf("%lld", &x)
#define DIIL(x,y)    LL x,y;        scanf("%lld", &x,&y)
#define DIIIL(x,y,z) LL x,y,z;      scanf("%lld", &x,&y,&z)

#define SS(s)                       scanf("%s",s)
#define S                           scanf
#define P                           printf

#define PI(x)                       printf("%d\n",      x)
#define PII(x,y)                    printf("%d %d\n",   x,y)
#define PIII(x,y,z)                 printf("%d %d %d\n",x,y,z)

#define PIL(x)                      printf("%lld\n",          x)
#define PIIL(x,y)                   printf("%lld %lld\n",     x,y)
#define PIIIL(x,y,z)                printf("%lld %lld %lld\n",x,y,z)

// LOOP
#define repv(i,a)                   for(int i=0;i<(int)a.size();i++)
#define revv(i,a)                   for(int i=((int)a.size())-1;i>=0;i--)
#define rep(i,a,b)                  for(int i=a;i<=b;i++)
#define rev(i,a,b)                  for(int i=a;i>=b;i--)

#define FS(x)                       for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define PR(x)                       for(typeof (x.begin()) it = x.begin(); it != x.end (); it++) {  cout << *it << " "; } cout << endl;

// array initialization
#define MEM(a,val)                  memset(a,val,sizeof(a));
#define SET(a)                      memset(a,-1,sizeof a)
#define CLR(a)                      memset(a,0,sizeof a)

// min-max
#define Max(a,b)                    (a>b?a:b)
#define _Max(a,b,c)                 Max(a,Max(b,c))
#define Min(a,b)                    (a<b?a:b)
#define _Min(a,b,c)                 Min(a,Min(b,c))
#define MAX(a)                      (*max_element(all(a)))
#define MIN(a)                      (*min_element(all(a)))

#define FastMax(x,y)                ((((y-x)>>(32-1))&(x^y))^y)
#define FastMin(x,y)                ((((y-x)>>(32-1))&(x^y))^x)

#define SQR(n)  (n*n)
#define eps     (1e-9)
#define pi      (2.0*acos(0.0)) //#define PI acos(-1.0)

#define all(a)  a.begin(),a.end()
#define pb      push_back
#define NL      puts("");
#define pline   cout << "_________________________" << endl;
// pair
#define X       first
#define Y       second
// binary search
#define LB(a,x) (lower_bound(all(a),x)-a.begin())
#define UB(a,x) (upper_bound(all(a),x)-a.begin())
// IO
#define READ        freopen("C:\\Users\\backbencher\\Desktop\\input.txt","r",stdin)
#define WRITE       freopen("C:\\Users\\backbencher\\Desktop\\output.txt","w",stdout)

#define _cin        ios_base::sync_with_stdio(0); cin.tie(0);

#define SI(X)           X=in<int>()
#define SII(X,Y)        X=in<int>(),Y=in<int>()
#define SIII(X,Y,Z)     X=in<int>(),Y=in<int>(),Z=in<int>()

#define SL(X)           X=in<LL>()
#define SLL(X,Y)        X=in<LL>(),Y=in<LL>()
#define SLLL(X,Y,Z)     X=in<LL>(),Y=in<LL>(),Z=in<LL>()

#define VI              vector< int >
#define VII             vector< VI >
#define VLL             vector< LL >
#define PPI             pair< int , int >
#define PPL             pair< LL , LL >
#define VPI             vector< PPI >

#define countbit(x) __builtin_popcount(x)

template< class T, class X > inline bool checkbit(T a, X pos) { T t=1;return ((a&(t<<pos))>0);  }
template< class T, class X > inline T      setbit(T a, X pos) { T t=1;return (a|(t<<pos));      }
template< class T, class X > inline T    resetbit(T a, X pos) { T t=1;return (a&(~(t<<pos)));   }
template< class T, class X > inline T   togglebit(T a, X pos) { T t=1;return (a^(t<<pos));      }

// mathematics
template<typename T> T POW(T B,T P)                 { if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return SQR(POW(B,P/2));}
template<typename T> T BPOW(T base,T power)         { if(power<0) return 0; T ret=1; while(power)  { if(power & 1) ret=(ret*base); base=(base*base);  power>>=1; }return ret; }
template<typename T> T Bigmod(T base,T power,T mod) { T ret=1; while(power)  { if(power & 1) ret=(ret*base)%mod; base=(base*base)%mod;  power>>=1; }return ret; }
template<typename T> T ModInverse(T number,T mod)   { return Bigmod(number,mod-2,mod); }
template<typename T> T GCD(T a,T b)                 { if(a<0)return GCD(-a,b);if(b<0)return GCD(a,-b);return (b==0)?a:GCD(b,a%b);}
template<typename T> T LCM(T a,T b)                 { if(a<0)return LCM(-a,b);if(b<0)return LCM(a,-b);return a*(b/GCD(a,b));}
template<typename T> T EUCLIDE(T a,T b,T &x,T &y)   { if(a<0){T d=euclide(-a,b,x,y);x=-x;return d;}   if(b<0){T d=euclide(a,-b,x,y);y=-y;return d;}   if(b==0){x=1;y=0;return a;}else{T d=euclide(b,a%b,x,y);T t=x;x=y;y=t-(a/b)*y;return d;}}
template<typename T> T ABS(T a)                     { if(a<0)return -a;else return a;}

// geometry
template<typename T> double DIS(T x1,T y1,T x2, T y2)   { return sqrt( (double)( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) ) );}
template<typename T> T ANGLE(T x1,T y1,T x2, T y2)      { return atan( double(y1-y2) / double(x1-x2));}
template<typename T> LL isLeft(T a,T b,T c)             { return (c.x-a.x)*(b.y-a.y)-(b.x-a.x)*(c.y-a.y); }

double DEG(double x) { return (180.0*x)/(pi);}
double RAD(double x) { return (x*(double)pi)/(180.0);}

// debug
void P_ARR(int *ar,int a,int b) {  if(a>b) swap(a,b); if(a<=b) cout << ar[a]; for(int i=a+1;i<=b;i++) cout << " "<<ar[i];  cout << endl; }
template<typename T> T in(){ char ch; T n = 0; bool ng = false; while (1) { ch = getchar(); if (ch == '-') { ng = true; ch = getchar(); break;} if (ch>='0' && ch<='9') break; }    while (1) { n = n*10 + (ch - '0'); ch = getchar(); if (ch<'0' || ch>'9')   break;    }  return (ng?-n:n);  }

//int month[]={31,28,31,30,31,30,31,31,30,31,30,31};                                    /// month
//int dir[5][2] = { {0,0},{1,0},{0,1},{-1,0},{0,-1} };                                  /// 4 Direction
//int dir[9][2] = { {0,0},{1,0},{0,1},{-1,0},{0,-1},{-1,1},{-1,-1},{1,-1},{1,1}};       /// 8 direction
//int dir[9][2] = { {0,0},{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1} };    /// Knight Direction
//int dir[8][2] = { {0,0},{2,0},{1,1},{-1,1} ,{-2,0} , {-1,-1} ,{1,-1} };               /// Hexagonal Direction
// dir[][0] = x value, dir[][1] = y value

/// ======================================================================================================

#define  debug  0
#define  DD     if(debug)

///             0123456789
#define  MX     17
#define  MOD    1000000007
#define  inf    1000000000


char s[MX][MX];
int vis[MX][MX][5];

int n,m;

int dx[5];
int dy[5];

void init()
{
    dx[0] = -1; dy[0] = 0;
    dx[1] =  0; dy[1] = 1;
    dx[2] =  1; dy[2] = 0;
    dx[3] =  0; dy[3] = -1;
}


bool check(int x,int y)
{
    if( x>=1 && x<=n && y>=1 && y<=m )
    {
          if( s[x][y]=='.' ) return true;
    }

    return false;
}

char ss[MX][MX];

void dfs(int x,int y,int d)
{
    if(vis[x][y][d]) return;
    vis[x][y][d] = 1;

//    cout << x << ","<<y<<" = " << d << endl;

//    ss[x][y] = 'S';

    int xx =  x+dx[d];
    int yy =  y+dy[d];

//    cout << xx << " --- " << yy << endl;

    if( check(xx,yy) )
    {
        dfs(xx,yy,d);
    }
    else
    {
        dfs(x,y,(d+1)%4);
    }
}

int main()
{
    init();

    map<char,int>mp;

    mp['U']=0;
    mp['R']=1;
    mp['D']=2;
    mp['L']=3;

    while( ~II(n,m) )
    {
        rep(i,1,n) SS(s[i]+1);
        CLR(vis);

//          memset(ss,'*',sizeof ss);



        rep(i,1,n) rep(j,1,m)
        {
            if( isalpha(s[i][j] ) )
            {
                char c = s[i][j];
                s[i][j] = '.';
                dfs(i,j,mp[c]);
                break;
            }
        }

//         pline;
//
//        rep(i,1,n)
//        {
//            rep(j,1,m) cout << ss[i][j]; cout << endl;
//        }
//        pline;



        int ret = 0;
        rep(i,1,n) rep(j,1,m)
        {
            int flag = 0;
            rep(k,0,3) flag+=vis[i][j][k];
            if(flag) ret++;
        }
        PI(ret);
    }

    return 0;
}