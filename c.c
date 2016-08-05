//x86_64 ABI - include this file for call and vcall.  gcc -DTEST x.c && ./a.out  (c) 2016 jack andrews
#define _GNU_SOURCE 
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#define R return
#define _ static inline
typedef int I;typedef long J;typedef void V;typedef char*S;
_ J call(V*f,J n,V*a)
{J r;switch(n)
#define M(x,b) case x:asm ("movq %0,%%r"#b";"::"g"(((J*)a)[x-1]):"%r"#b)
 {M(4,cx);M(3,dx);M(2,si);M(1,di);case 0:asm ("push %%rbp;call *%1;pop %%rbp":"=a"(r):"g"(f):);break;default: R *(J*)0;
}}
_ J vcall(V*f,V*x,V*y,...){J r;va_list l;va_start(l,y);V*a[]={x,y,l};r=call(f,3,a);va_end(l);R r;}
#ifdef TEST
#define A(x,y) {I r;if(x!=(r=y))exit(fprintf(stderr,"line %d ?%d\n",__LINE__,r));}
J O2(S x,S y){R (J)fprintf(stdout,x,y);}
I main()
{S t;I x=call(atol,1,(S[]){"32"});
 A(2,vcall(vasprintf,&t,"%ld",x))
 A(3,call(O2,2,(S[]){"%s\n",t})) /*expect 32*/
 free(t);R 0;
}
#endif
