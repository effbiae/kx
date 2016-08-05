K=-g -DKXVER=3
S=$K-fPIC -shared 
X=$K -pthread l64/c.o

sc: sc.c
	gcc sc.c -o sc $X
r: r.c
	gcc r.c -o r
c: c.c
	gcc c.c -o c -DTEST 
