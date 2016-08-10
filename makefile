K=-g3 -DKXVER=3
S=$K-fPIC -shared 
X=$K -pthread l64/c.o
G=-lSDL2 -lcairo -lSDL2_ttf

sdl: sdl.c
	gcc sdl.c -o sdl $X $G
sc: sc.c
	gcc sc.c -o sc $X
r: r.c
	gcc r.c -o r
c: c.c
	gcc c.c -o c -DTEST 
g: g.c
	gcc g.c -o g $X $G

I=/usr/include
L=$I/x86_64-linux-gnu
T=*.h $I/cairo/*.h $I/SDL2/*.h $I/*.h $I/sys/*.h
t:
	ctags -R --sort=yes --c++-kinds=+p --fields=+iaS --extra=+q --language-force=C++ -I DECLSPEC,SDLCALL,__attribute__+ $T
