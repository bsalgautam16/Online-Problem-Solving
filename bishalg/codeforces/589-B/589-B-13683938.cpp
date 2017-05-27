/// *********************************************** K
/// B *                                           * H
/// I *    Solved By : Bir Bahadur Khatri(B'ru)   * A
/// R *      Be Positive,be Happy.                * T
/// U *                                           * R
/// *********************************************** I

#include<bits/stdc++.h>

#define LL long long int
#define ULL unsigned LL
#define PI 2.0*acos(0.0)
#define D double
#define sz size()
#define PB push_back
#define cp printf("***** here here here here *****\n");
#define NL printf("\n")
#define CHR getchar()
#define SQR(n) (n*n)
#define xx first
#define yy second
#define MEM(a,val) memset(a,val,sizeof(a))
#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)
#define _Max(a,b,c) Max(a,Max(b,c))
#define _Min(a,b,c) Min(a,Min(b,c))
#define S1(a) a=in<int>()
#define S2(a,b) a=in<int>(),b=in<int>()
#define S3(a,b,c) a=in<int>(),b=in<int>(),c=in<int>()
#define SL1(a) a=in<LL>()
#define SL2(a,b) a=in<LL>(),b=in<LL>()
#define SL3(a,b,c) a=in<LL>(),b=in<LL>(),c=in<LL>()
#define F(i,a,b) for(int i=a;i<b; i++)
#define R(i,a,b) for(int i=a-1;i>=b; i--)
#define all(a) a.begin(),a.end()
#define BitCnt(a) __builtin_popcountll(a)
#define InpOut freopen("A.in","r",stdin),freopen("A1.out","w",stdout)
#include <time.h>

using namespace std;
template <typename T> T in(){char ch;T n = 0;bool ng = false;while (1){ch = getchar();if (ch == '-'){ng = true;ch = getchar();break;}if (ch>='0' && ch<='9')     break;}while (1){n = n*10 + (ch - '0');ch = getchar();if (ch<'0' || ch>'9')   break;}return (ng?-n:n);}
template<typename T>inline T Dist(T x1,T y1,T x2, T y2){return sqrt( SQR(x1-x2) + SQR(y1-y2) );}
template<typename T>inline T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return SQR(POW(B,P/2));}
template<typename T>inline T ABS(T a) {if(a<0)return -a;else return a;}
template<typename T>inline T Gcd(T a,T b){if(a<0)return Gcd(-a,b);if(b<0)return Gcd(a,-b);return (b==0)?a:Gcd(b,a%b);}
template<typename T>inline T Lcm(T a,T b) {if(a<0)return Lcm(-a,b);if(b<0)return Lcm(a,-b);return a*(b/Gcd(a,b));}
long long Bigmod(long long base, long long power, long long MOD){long long ret=1;while(power){if(power & 1)ret=(ret*base)%MOD;base=(base*base)%MOD;power>>=1;}return ret;}
long long ModInverse(long long number, long long MOD){return Bigmod(number, MOD-2, MOD);}
int Set(int N,int pos){ return N=N | (1<<pos);}
int Reset(int N,int pos){return N= N & ~(1<<pos);}
bool Chkbit(int N,int pos){return (bool)(N & (1<<pos));}
bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
bool isConst(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}
int toInt(string s)  { int sm; stringstream ss(s); ss>>sm; return sm; }
long long int toLlint(string s) { long long int sm; stringstream ss(s); ss>>sm; return sm;}

///**********************************************************//


///         0123456789
#define MX  1000007
#define MOD 1000000007
#define INF (1<<50)*1.0
/// ==========================================////

struct z
{
    LL a,b;
};

z ar[MX];

bool cmp(z aa,z bb)
{
    if(aa.a<bb.a) return true;
    else if(aa.a==bb.a) return (aa.b<bb.b);
    return false;
}

LL dp[4005][4005];

int main()
{

    int n;
    S1(n);

    for(int i=1;i<=n;i++) {
        LL x,y;SL2(x,y);
        if(x>y) swap(x,y);
        ar[i].a=x,ar[i].b=y;
    }

    sort(ar+1,ar+n+1,cmp);

    for(int i=1;i<=n;i++) {
        int cnt=0;
        for(int j=n;j>=1;j--) {
            if(ar[i].b<=ar[j].b) cnt++;
            dp[i][j]=cnt;
        }
    }

    LL ans=0;

    LL l,w;

    for(LL i=1;i<=n;i++) {
        LL tmp=0;

        for(int j=i;j<=n;j++) {
            if(ar[j].b<=ar[i].b) {
                LL tp=dp[j][i];
                tp=tp*ar[i].a*ar[j].b;
                if(tp>ans) {
                    ans=tp;
                    l=ar[i].a;
                    w=ar[j].b;
                }
            }
        }
    }
    printf("%lld\n",ans);
    printf("%lld %lld\n",l,w);

    return 0;
}

///============= Thank You ===================///