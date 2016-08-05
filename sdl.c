//install libcairo2-dev libsdl2-dev
#include <SDL2/SDL.h>
#define KXVER 3
#include"k.h"
#define A(x)     if(!(x))O("A(%s)@%d\n",#x,__LINE__),exit(*(S)0);  //assert - simplistic error handling
#define IN(x,y,z)  ({typeof(x) _x=x;_x>=(y)&&_x<(z);})
#define ON(x,y,z)  IN(x,y,z+1)


SDL_Renderer*renderer;
Z K1(draw)
{SDL_SetRenderDrawColor( renderer, 0, 0, 255, 255 );
 SDL_Rect q={xg,50,50,50};
 SDL_RenderFillRect(renderer,&q);
 SDL_RenderPresent(renderer);
 R x;
}
Z K1(home){S s=getenv("HOME");x=ktn(KC,strlen(s));DO(xn,xC[i]=s[i])R x;}
ZK(*f[])()={home,draw,0};ZS n[]={"home","draw",0};ZJ a[]={1,1};//exported functions and their arity

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
 I c=khp("",5001);SDL_Init(SDL_INIT_EVERYTHING);
 S x="title";I y=500,z=500,a=SDL_WINDOWPOS_UNDEFINED;SDL_Window*w=SDL_CreateWindow(x,a,a,y,z,SDL_WINDOW_SHOWN);
 renderer=SDL_CreateRenderer(w,-1,SDL_RENDERER_ACCELERATED);SDL_SetRenderDrawColor(renderer,255,255,255,255);SDL_RenderClear(renderer);
 SDL_RenderPresent(renderer);
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
