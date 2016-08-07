//install libsdl2-dev libsdl2-ttf-dev [libcairo2-dev]
#include<SDL2/SDL_ttf.h>
#include<cairo/cairo.h>
#include"k+.h"
#define A(x) if(!(x))O("A(%s)@%d\n",#x,__LINE__),exit(*(S)0);  //assert - simplistic error handling
#define IN(x,y,z) ({typeof(x) _x=x;_x>=(y)&&_x<(z);})
#define ON(x,y,z) IN(x,y,z+1)

#define crs(c) cairo_status_to_string(cairo_status((V*)c))
S SDL_e(V*x){R (S)SDL_GetError();}S TTF_e(V*x){R (S)TTF_GetError();}S cairo_e(V*x){R (S)cairo_status_to_string(cairo_status(x));}
#define xsx(c,r,f,a,e) if(c(r=f a)){O("*%s:%s %d\n",#f,e,__LINE__),exit(*(S)0);}
#define XY(x,c,r,f,a) xsx(c,r,x##_##f,a,x##_e((V*)r))
#define XZ(x,c,f,a)  {J _r;xsx(c,_r,x##_##f,a,x##_e((V*)_r));}
#define SA(f,a)   XZ(SDL,!!, f,a)
#define SP(r,f,a) XY(SDL,!,r,f,a)
#define TA(f,a)   XZ(TTF,!!, f,a)
#define TP(r,f,a) XY(TTF,!,r,f,a)
#define CA(f,a)   XZ(cairo,!!, f,a)
#define CP(r,f,a) XY(cairo,!,r,f,a)
#define C(x) cairo_##x
struct {SDL_Renderer*r;SDL_Window*w;TTF_Font*f;J d[2];J u[2];I t;cairo_t*ccdd;}g;
cairo_t*cai(cairo_t*(*f)(cairo_t*))
{int width, height, pitch;void *pixels;
 SDL_GetWindowSize(g.w, &width, &height);
 SDL_Texture*t;SP(t,CreateTexture,(g.r,SDL_PIXELFORMAT_ARGB8888,SDL_TEXTUREACCESS_STREAMING,width,height));
 SA(LockTexture,(t, NULL, &pixels, &pitch));
 cairo_surface_t *cs;CP(cs,image_surface_create_for_data,(pixels,CAIRO_FORMAT_ARGB32,width,height,pitch));
 A(cs);cairo_t*s;CP(s,create,(cs));A(s);
 cairo_t*fr;A(fr=f(s));SDL_UnlockTexture(t);SA(RenderCopy,(g.r,t,NULL,NULL));SDL_RenderPresent(g.r);R fr;
}
cairo_t*cb(cairo_t*cr)
{char buf[128] = "hello world";
 cairo_set_source_rgb(cr, 1.0, 1.0, 1.0);
 cairo_rectangle(cr, 10, 20, 128, 128);
 cairo_stroke(cr); //cairo_fill(cr)
 R cr;
}

Z K1(T){A(xt==KC);K a=ktn(KC,xn+1);DO(xn,kC(a)[i]=xC[i]);kC(a)[xn]=0;R a;}
#define DJ(T) DO(n,xJ[i]=((T*)a)[i])
#define DK(T) DO(n,((T*)a)[i]=xJ[i])

#define SE(n,x,y,t,u) DO(n,((t*)x)[i]=((u*)y)[i])
#define SEJ(n,x,y,u)  SE(n,x,J,y,u)  // ZH t[]={[0=8],[KC=1],[KH=2],[KI=4],[KJ=8]};
ZK JA(V*a,J n,J z){K x=ktn(KJ,n);SW(z){CS(8,DJ(J))CS(4,DJ(I))CS(2,DJ(H))CS(1,DJ(G))CD:A(0)}R x;}ZK J2(J*a){R JA(a,2,8);}ZK JI2(I*a){R JA(a,2,4);}
Z K1(start)//rect
{SP(g.w,CreateWindow,("W",xI[0],xI[1],xI[2],xI[3],SDL_WINDOW_SHOWN));
 SP(g.r,CreateRenderer,(g.w,-1,SDL_RENDERER_ACCELERATED));SA(SetRenderDrawColor,(g.r,255,255,255,255));SA(RenderClear,(g.r));
 SDL_RenderPresent(g.r);R kj((J)g.r);
}
Z K1(winfo){I s[2];SDL_GetWindowSize(g.w,s,s+1);R JI2(s);}Z K1(finfo){R J2(g.d);}
Z K2(tx)
{A(xt==KC);SDL_Color b={0,0,0},f={200,200,200};K s=T(x);SDL_Surface*u;TP(u,RenderText_Shaded,(g.f,kC(s),b,f));
 SDL_Texture*a;SP(a,CreateTextureFromSurface,(g.r,u));K z=ktn(KI,2);SA(QueryTexture,(a,0,0,zI,zI+1));/*SDL_FreeSurface(u);*/R knk(2,z,kj((J)a));
}
Z K2(rcp){//i4,texture... SDL_Rect e={0,g.d[1]*y->i,xn*g.d[0],g.d[1]};
 SA(RenderCopy,(g.r,(V*)yj,0,(V*)xI));//*SDL_DestroyTexture(a);*/SDL_RenderCopy
}
Z K1(txt)
{K2(line){A(xt==KC);SDL_Color b={0,0,0},f={200,200,200};
          K s=T(x);SDL_Surface*u;TP(u,RenderText_Shaded,(g.f,kC(s),b,f));SDL_Texture*a;SP(a,CreateTextureFromSurface,(g.r,u));
          SDL_Rect e={0,g.d[1]*y->i,xn*g.d[0],g.d[1]};SA(RenderCopy,(g.r,a,0,&e));SDL_DestroyTexture(a);
/*NB u*/  u->w;u->h;SDL_FreeSurface(u);r0(s);
 }
 A(!xt);DO(xn,line(xK[i],kj(i)))
 SDL_RenderPresent(g.r);
 R kj(6);
}
#define C1(x) C(t)*x(C(t)*t)
K1(line){}
K1(cur){if(xt==KJ){DO(2,g.u[i]=xJ[i]);SDL_TimerID t;A(t=SDL_AddTimer(1000,0,kj(0)));}else if(xt==-KJ)A(SDL_RemoveTimer(g.t))else A(0)}
Z K1(home){S s=getenv("HOME");x=ktn(KC,strlen(s));DO(xn,xC[i]=s[i])R x;}
ZK(*f[])()={home,start,txt,tx,0};ZS n[]={"home","start","txt","tx",0};ZJ a[]={1,1,1,2};//exported functions and their arity

Z K1(call)
{K1(d){K k=ktn(KS,0),v=ktn(KJ,0);J i=0;while(f[i])js(&k,ss(n[i])),ja(&v,a+i),i++;R knk(2,k,v);}
 P(0>xt,d(0));A(xt==0);A(xn>1);A(xx->t==-KS);R f[xy->j](xK[2]);
}
Z K1(font){TP(g.f,OpenFont,("DejaVuSansMono.ttf",12));I d[2];TA(SizeText,(g.f,"Wy",d,d+1));*d=*d/2;DO(2,g.d[i]=d[i]);R kj(7);}
ZI g0(){SDL_Init(SDL_INIT_EVERYTHING);TTF_Init();font(0);}
ZI sel(I c,F t)
{A(2<c);I r;fd_set f,*p=&f;FD_ZERO(p);FD_SET(c,p);long s=t,v[]={s,1e6*(t-s)};
 A(-1<(r=select(c+1,p,(V*)0,(V*)0,(V*)v)));P(r&&FD_ISSET(c,&f),c)R 0;
}
ZK sr(I c){I t;K x;A(x=k(c,(S)0));R k(-c,"",call(x),(K)0);} //async from q
I main(I n,S*v){
 I c=khp("",5001);g0();
 I run = 1;
 while(run)
 {SDL_Event event;
  while(SDL_PollEvent(&event))
  {if(event.type==SDL_QUIT)run=0;
   else if (event.type==SDL_KEYDOWN){SDL_Keycode d=event.key.keysym.sym;C e=-1;
    if(ON(d,SDLK_RIGHT,SDLK_UP))e=d-SDLK_RIGHT;
    if(strchr(" \r",d)||ON(d,'a','z'))e=d;
    if(e!=-1&&c>0)k(-c,"{k 0N!x}",kc(e),(K)0);
   }
  }if(c==sel(c,1e-2))A(sr(c));
 }
 SDL_DestroyWindow(g.w);
 SDL_Quit();
 return 0;
}
