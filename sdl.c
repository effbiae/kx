//install libcairo2-dev libsdl2-dev libsdl2-ttf-dev
#include<SDL2/SDL.h>
#include<SDL2/SDL_ttf.h>
#include"k.h"
#define A(x) if(!(x))O("A(%s)@%d\n",#x,__LINE__),exit(*(S)0);  //assert - simplistic error handling
#define IN(x,y,z) ({typeof(x) _x=x;_x>=(y)&&_x<(z);})
#define ON(x,y,z) IN(x,y,z+1)

#define crs(c) cairo_status_to_string(cairo_status((V*)c))
#define xsx(T,r,f,a,c,z,e) if(!((r=f a) c z)){fprintf(stderr,"*%s:%s\n",#f,e),fflush(stderr),exit(*(S)0);}
#define Asx(T,r,f,a,c,z)   xsx(T,r,SDL_##f,a,c,z,SDL_GetError())
#define Acx(T,r,f,a,c,z)   xsx(T,r,cairo_##f,a,c,z,crs(r))
#define Atx(T,r,f,a,c,z)   xsx(T,r,TTF_##f,a,c,z,TTF_GetError())
#define SA(f,a) ({I _r;Asx(I,_r,f,a,==,0);})
#define SP(r,f,a) Asx(V*,r,f,a,!=,(V*)0)
#define TA(f,a) ({I _r;Atx(I,_r,f,a,==,0);})
#define TP(r,f,a) Atx(V*,r,f,a,!=,(V*)0)
#define CA(f,a) ({I _r;Acx(I,_r,f,a,==,0);})
#define CP(r,f,a) Acx(V*,r,f,a,!=,(V*)0)

struct {SDL_Renderer*v;SDL_Window*w;TTF_Font*f;}g;
Z K1(draw)
{SDL_SetRenderDrawColor(g.v,0,0,255,255);
 SDL_Rect q={xg*3,50,50,50};
 SDL_RenderFillRect(g.v,&q);
 SDL_RenderPresent(g.v);
 R kj(9);
}
Z K1(letter)
{TTF_Font*f=TTF_OpenFont("/usr/share/fonts/truetype/dejavu/DejaVuSansMono.ttf", 24);
 S s="hello";I d[2];TA(SizeText,(f,s,d,d+1));
 SDL_Color b={0,0,0};SDL_Surface*u;TP(u,RenderText_Shaded,(f,s,b,(SDL_Color){255,255,255}));
 SDL_Texture*a;SP(a,CreateTextureFromSurface,(g.v,u));
 SDL_Rect e={100,100,d[0],d[1]};
 SA(RenderCopy,(g.v,a,0,&e));
 SDL_RenderPresent(g.v);
 SDL_DestroyTexture(a);
 u->w;u->h; SDL_FreeSurface(u);
 R kj(8);
}
Z K1(home){S s=getenv("HOME");x=ktn(KC,strlen(s));DO(xn,xC[i]=s[i])R x;}
ZK(*f[])()={home,draw,letter,0};ZS n[]={"home","draw","letter",0};ZJ a[]={1,1,1};//exported functions and their arity

Z K1(call)
{K1(d){K k=ktn(KS,0),v=ktn(KJ,0);J i=0;while(f[i])js(&k,ss(n[i])),ja(&v,a+i),i++;R knk(2,k,v);}
 P(0>xt,d(0));A(xt==0);A(xn>1);A(xx->t==-KS);R f[xy->j](xK[2]);
}
ZI sel(I c,F t)
{A(2<c);I r;fd_set f,*p=&f;FD_ZERO(p);FD_SET(c,p);long s=t,v[]={s,1e6*(t-s)};
 A(-1<(r=select(c+1,p,(V*)0,(V*)0,(V*)v)));P(r&&FD_ISSET(c,&f),c)R 0;
}
ZK sr(I c){I t;K x;A(x=k(c,(S)0));R k(-c,"",call(x),(K)0);} //async from q
I main(I n,S*v){
 I c=khp("",5001);SDL_Init(SDL_INIT_EVERYTHING);TTF_Init();
 S x="title";I y=500,z=500,a=SDL_WINDOWPOS_UNDEFINED;SDL_Window*w=SDL_CreateWindow(x,a,a,y,z,SDL_WINDOW_SHOWN);
 g.v=SDL_CreateRenderer(w,-1,SDL_RENDERER_ACCELERATED);SDL_SetRenderDrawColor(g.v,255,255,255,255);SDL_RenderClear(g.v);
 SDL_RenderPresent(g.v);
 I run = 1;
 while(run)
 {SDL_Event event;
  while(SDL_PollEvent(&event))
  {if(event.type==SDL_QUIT)run=0;
   else if (event.type == SDL_KEYDOWN){ C d=event.key.keysym.sym; if(d=='\r'||ON(d,'a','z'))k(-c,"{k 0N!x}",kc(d),(K)0); }
  }if(c==sel(c,1e-2))A(sr(c));
 }
 SDL_DestroyWindow(w);
 SDL_Quit();
 return 0;
}
