//RPN calculator: E:EEf|n f:[+-*/] n:[0-9]
typedef int I;typedef long J;typedef char C,*S;typedef J(*F)(J*);I printf(S,...);I(*O)(S,...)=printf;
#define R return
#define W(x,y...) while(x){y;}
#define K(m) m(+)m(-)m(*)m(/)
#define L(o) ""#o
#define M(o) ({J _f(J*x){R x[0] o x[1];}_f;}),
I main(I c,S*v)
{if(c!=2)R O("use: %s 12+3-\n",*v);
 J s[99],*t=s;;J push(J x){R *t++=x;}J*pop(I n){R t-=n;}J jsc(S s,C c){S t=s;W(*t&&c!=*t,t++)R t-s;}
 C o[]=K(L);F f[]={K(M)0};S e=v[1];W(*e,push(*e>47?*e-'0':f[jsc(o,*e)](pop(2))),e++)R O("%ld\n",*pop(1));
}
