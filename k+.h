#include"k.h"

#define O2(x...) fprintf(stderr,x)
#define _ static inline
#undef P
#define P(b,a...)   if(b)return(a);
#define N(n,a...)   {I i=0,_n=(n);while(i<_n){a;++i;}}
#define W(b...)     while((b))              //while
#define $(b,a...)   if(b){a;}else           //cond
#define C(i,a...)   case i:{a;}break;       //case
#define S(i,c,a...) switch(i){c default:a;} //switch
#define MN(a,b)    ({typeof(a)_a=(a);typeof(a)_b=(b);_a<_b?_a:_b;})
#define MX(a,b)    ({typeof(a)_a=(a);typeof(a)_b=(b);_a>_b?_a:_b;})
#define IN(x,y,z)  ({typeof(x) _x=x;_x>=(y)&&_x<(z);})
#define ON(x,y,z)   IN(x,y,z+1)

#define PE perror
#define AC(s...)    (O2(s),exit(1),(V*)0L) 
#define AB(s)       AC(":%s\n",s)
#define AN(x,y)     ((x)==(y)?PE(__FILE__),AC("%s==%s @%d\n",#x,#y,__LINE__):0)
#define AS(x)       AN(-1,(x))
#define A(x)        ((x)?0:(O2("A(%s)@%d\n",#x,__LINE__),AB(*(S*)0)))

#define xc TX(C,x)

#define yr y->r
#define yt y->t
#define yu y->u
#define yn y->n
#define yx yK[0]
#define yy yK[1]
#define yg TX(G,y)
#define yc TX(C,y)
#define yh TX(H,y)
#define yi TX(I,y)
#define yj TX(J,y)
#define ye TX(E,y)
#define yf TX(F,y)
#define ys TX(S,y)
#define yk TX(K,y)
#define yG y->G0
#define yH ((H*)yG)
#define yI ((I*)yG)
#define yJ ((J*)yG)
#define yE ((E*)yG)
#define yF ((F*)yG)
#define yS ((S*)yG)
#define yK ((K*)yG)
#define yC yG
#define yB ((G*)yG)

#define zr z->r
#define zt z->t
#define zu z->u
#define zn z->n
#define zx zK[0]
#define zy zK[1]
#define zg TX(G,z)
#define zc TX(C,z)
#define zh TX(H,z)
#define zi TX(I,z)
#define zj TX(J,z)
#define ze TX(E,z)
#define zf TX(F,z)
#define zs TX(S,z)
#define zk TX(K,z)
#define zG z->G0
#define zH ((H*)zG)
#define zI ((I*)zG)
#define zJ ((J*)zG)
#define zE ((E*)zG)
#define zF ((F*)zG)
#define zS ((S*)zG)
#define zK ((K*)zG)
#define zC zG
#define zB ((G*)zG)

#define rr r->r
#define rt r->t
#define ru r->u
#define rn r->n
#define rx rK[0]
#define ry rK[1]
#define rg TX(G,r)
#define rc TX(C,r)
#define rh TX(H,r)
#define ri TX(I,r)
#define rj TX(J,r)
#define re TX(E,r)
#define rf TX(F,r)
#define rs TX(S,r)
#define rk TX(K,r)
#define rG r->G0
#define rH ((H*)rG)
#define rI ((I*)rG)
#define rJ ((J*)rG)
#define rE ((E*)rG)
#define rF ((F*)rG)
#define rS ((S*)rG)
#define rK ((K*)rG)
#define rC rG
#define rB ((G*)rG)

