//sc.c  server calls client with simulated GET.   gcc sc.c -o sc -DKXVER=3 -pthread l64/c.o
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"k.h"
#define A(x)     if(!(x))O("A(%s)@%d\n",#x,__LINE__),exit(*(S)0);  //assert - simplistic error handling

Z K1(home){S s=getenv("HOME");x=ktn(KC,strlen(s));DO(xn,xC[i]=s[i])R x;}
Z K1(palindrome){A(xt==KC);C c,*d;K k=ktn(KC,xn*2);DO(xn,kC(k)[i]=xC[i]);DO(xn,kC(k)[xn+i]=xC[xn-1-i]);R k;}
ZK(*f[])()={home,palindrome,0};ZS n[]={"home","palindrome",0};ZJ a[]={1,1};//exported functions and their arity

Z K1(call)//remote sends atom or (`rev;0;x) or (`home;1;)
{K1(d){K k=ktn(KS,0),v=ktn(KJ,0);J i=0;while(f[i])js(&k,ss(n[i])),ja(&v,a+i),i++;R knk(2,k,v);}
 P(0>xt,d(0));A(xt==0);A(xn>1);A(xx->t==-KS);R f[xy->j](xK[2]);
}
ZI sel(I c,F t)
{A(2<c);I r;fd_set f,*p=&f;FD_ZERO(p);FD_SET(c,p);long s=t,v[]={s,1e6*(t-s)};
 A(-1<(r=select(c+1,p,(V*)0,(V*)0,(V*)v)));P(r&&FD_ISSET(c,&f),c)R 0;
}
ZK sr(I c){I t;K x;A(x=k(c,(S)0));R k(-c,"",call(x),(K)0);} //async from q
I main(I n,S*v){I c=khp("",5001);while(1)if(c==sel(c,1e-2))A(sr(c));}
