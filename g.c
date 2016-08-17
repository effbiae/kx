//install libsdl2-dev libsdl2-ttf-dev [libcairo2-dev]
//#include <sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<SDL2/SDL_ttf.h>
#include"k+.h"

S SDL_e(V*x){R (S)SDL_GetError();}S TTF_e(V*x){R (S)TTF_GetError();}
#define xsx(c,r,f,a,e) if(c(r=f a)){O("*%s:%s %d\n",#f,e,__LINE__),exit(*(S)0);}
#define XY(x,c,r,f,a) xsx(c,r,x##_##f,a,x##_e((V*)r))
#define XZ(x,c,f,a)  {J _r;xsx(c,_r,x##_##f,a,x##_e((V*)_r));}
#define SA(f,a)   XZ(SDL,!!, f,a)
#define SP(r,f,a) XY(SDL,!,r,f,a)
#define TA(f,a)   XZ(TTF,!!, f,a)
#define TP(r,f,a) XY(TTF,!,r,f,a)
Z struct {SDL_Renderer*r;SDL_Window*w;TTF_Font*f;J d[2];J u[2];I t,c,q;}g;
#define DJ(T) DO(n,xJ[i]=((T*)a)[i])
ZK JA(V*a,J n,J z){K x=ktn(KJ,n);SW(z){CS(8,DJ(J))CS(4,DJ(I))CS(2,DJ(H))CS(1,DJ(G))CD:A(0);}R x;}ZK J2(J*a){R JA(a,2,8);}ZK JI2(I*a){R JA(a,2,4);}
ZI SRDC(V*r,K x){A(xn==4);G*c=xG;SA(SetRenderDrawColor,(r,c[0],c[1],c[2],c[3]));R 0;}
Z K2(start)
{A(xt==KI&&xn==4);SP(g.w,CreateWindow,("W",xI[0],xI[1],xI[2],xI[3],SDL_WINDOW_SHOWN));SP(g.r,CreateRenderer,(g.w,-1,SDL_RENDERER_ACCELERATED));
 A(yt==KG&&yn==4);A(!SRDC(g.r,y));SA(RenderClear,(g.r));SDL_RenderPresent(g.r);R kj((J)g.r);
}
Z K1(clr){A(!SRDC(g.r,x));SA(RenderClear,(g.r));SDL_RenderPresent(g.r);R kj((J)g.r);}
Z K1(t0){SDL_DestroyTexture((V*)xj);R kj(0);}
Z K2(rcp)/*texture,i4...*/{SA(RenderCopy,(g.r,(V*)xj,0,(SDL_Rect*)yI));R kj((J)g.r); }//SDL_Rect e={0,g.d[1]*y->i,xn*g.d[0],g.d[1]};
Z K1(rp){SDL_RenderPresent(g.r);R kj((J)g.r);}
Z K1(rdc){A(xt=KG);A(!SRDC(g.r,x));R kj(0);}
Z SDL_Color*c(K x){A(xt==KG);A(xn==4);R (SDL_Color*)xG;} //[0],xG[1],xG[2],xG[3]};}
Z K1(T){A(xt==KC);K a=ktn(KC,xn+1);DO(xn,kC(a)[i]=xC[i]);kC(a)[xn]=0;R a;}
ZK p(K x,K y,K z)/*fg,bg,s:txr*/
{A(zt==KC);A(zn>0);SDL_Surface*u;TP(u,RenderText_Shaded,(g.f,kC(T(z)),*c(x),*c(y)));SDL_Texture*a;SP(a,CreateTextureFromSurface,(g.r,u));SDL_FreeSurface(u);R kj((J)a);}
Z K1(txz){A(xt==-KJ);K f=kj(0);K a=kj(0);K r=ktn(KI,2);SA(QueryTexture,((V*)xj,(I*)&f->j,(I*)&a->j,rI,rI+1));r0(f);r0(a);R r;}
ZI tcb(I x,V*y){SDL_Event e={0};SDL_UserEvent f={0};e.type=f.type=SDL_USEREVENT;f.data1=y;e.user=f;A(SDL_PushEvent(&e));R x;}
ZK tim(K x,K y,K z){A(xt==-KI);K d=knk(2,y,z);I i;A(i=SDL_AddTimer(xi,(V*)tcb,r1(d)));R ki(i);}
Z K2(tio){A(SDL_RemoveTimer(xi));R kj(0);}
#define C1(x) CO(t)*x(CO(t)*t)
Z K1(rect){A(xt==KI);SA(RenderDrawRect,(g.r,(SDL_Rect*)xI));}
Z K1(home){S s=getenv("HOME");x=ktn(KC,strlen(s));DO(xn,xC[i]=s[i])R x;}
#define fx(x,y) x
#define gs(x,y) ""#x
#define hy(x,y) y
#define F(m) m(home,1),m(start,2),m(tim,3),m(tio,1),m(p,3),m(txz,1),m(t0,1),m(rcp,2),m(rect,1),m(rp,1),m(clr,1)
ZK(*f[])()={F(fx),0};ZS n[]={F(gs),0};ZJ a[]={F(hy),0};

Z K1(call)
{K1(d){K k=ktn(KS,0),v=ktn(KJ,0);J i=0;while(f[i])js(&k,ss(n[i])),ja(&v,a+i),i++;R knk(2,k,v);}
 P(-KS==xt,d(0));A(xt==0);A(xn>1);A(xx->t==-KS);I n=xn-2;A(n<4);
 0&&O(">%s",xx->s);K r=n==1?f[xy->j](xK[2]):n==2?f[xy->j](xK[2],xK[3]):f[xy->j](xK[2],xK[3],xK[4]);0&&O(" %s,\n",xx->s);fflush(stdout);R r;
}
Z K1(font){TP(g.f,OpenFont,("DejaVuSansMono.ttf",14));I d[2];TA(SizeText,(g.f,"Wy",d,d+1));*d/=2;DO(2,g.d[i]=d[i]);R kj(7);}
ZI g0(){SDL_Init(SDL_INIT_EVERYTHING);TTF_Init();font(0);}
ZI sel(I c,F t){I r;fd_set f,*p=&f;if(-1<c){FD_ZERO(p);FD_SET(c,p);}else p=0;long s=t,v[]={s,1e6*(t-s)};AS(r=select(c+1,p,(V*)0,(V*)0,(V*)v));P(r&&FD_ISSET(c,&f),c)R 0;}
Z K2(lam){K r=ktn(0,2);rx=r1(x);ry=r1(y);R r;}
ZK sr(I c){I t;K x;A(x=k(c,(S)0));A(!xt);R k(-c,"",lam(xx,call(xy)),(K)0);} //async from q
I kon(F t,I n,I p){N(n,P(0<(g.c=khp("",p)),g.c)sel(g.c,t));R g.c;}I wat(J p){I s;R A(waitpid(g.q,&s,0)),A(WIFEXITED(s)),0;}
ZI fexec(I n,S*v){AS(g.q=fork());$(!g.q,AS(execvp("q",(S[]){"q","g.k",0}))){kon(1e-1,10,5001);P(g.c,g.c)wat(g.q);}}
ZV ex(V){I s;AS(kill(g.q,9));AS(wait(&s));}
#define SK(x,y) [SDL_SCANCODE_##y]=x,
G km[]={SK(0,RIGHT)SK(1,LEFT)SK(2,DOWN)SK(3,UP)SK(4,END)SK(5,HOME)SK(6,PAGEDOWN)SK(7,PAGEUP)SK(8,BACKSPACE)SK(9,TAB)SK(10,RETURN)SK(127,DELETE)SK(27,ESCAPE)SK(32,SPACE)
        SK('C',LCTRL)SK('S',LSHIFT)SK('A',LALT)SK('C',RCTRL)SK('S',RSHIFT)SK('A',RALT)SK(255,UNKNOWN)};
G*k0(){DO(26,km[i+SDL_SCANCODE_A]='a'+i)}
I main(I n,S*v){
 AN(0,g.c=fexec(n,v));atexit(ex);g0();k0();I run=1;while(run)
 {SDL_Event e;
  while(SDL_PollEvent(&e))
  {if(e.type==SDL_QUIT)run=0;
   else if(e.type==SDL_KEYDOWN){SDL_Scancode d=e.key.keysym.scancode;G c;if((c=km[d])<200){k(-g.c,"k",kc(c),(K)0);}}
   else if(e.type==SDL_USEREVENT){K x=e.user.data1;A(!xt);A(xn==2);k(-g.c,"{value[x]y}",r1(xK[0]),r1(xK[1]),(K)0);}
  }if(g.c==sel(g.c,1e-2))A(sr(g.c));}
 SDL_DestroyWindow(g.w);
 SDL_Quit();
 return 0;
}
