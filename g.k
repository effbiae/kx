\p 5001
q:();GET:{(-h)x;while[#*a:h[];q::q,,a];if[#q;."\\t 200"];a[1;1]}
.z.ts:{$[#q;[x:*q;q::1_q;.z.ps x];."\\t 0"]};.z.po:{h::x;fs 0N!GET(.z.P;`);start[wr;b];ttx a};.z.ps:{.:x}
fs:{{-6!-5!x,":{GET[(.z.P;(`",x,";",z,";",(";"/:$y#"xyz"),"))]}"}.'(+($ x 0;x 1)),',:'$!#x 0}
fb:(f:0x00000000;b:0x99999900);wr:200 200 900 300i
a:("The quick brown fox jumps over the lazy dog";"in a quandry")
c:1 5;ti:0N
k:{kp x;ttx a}
one:{$[0=#x;," ";x]}
ttx:{rp rcp .'q{(x;y)}'ld::(0i,'+\last'd),'d:pd'q:p[f;b]'one'x;fb::(b;f);$[^ti;0;tio[ti]];blink`;ti::tim[500i;`blink;0]}
blink:{q:(p . fb)@,a . c;rcp[q;@[ld[*c];0 2;:;7h$(c[1]*u;u:*pd q)]];fb::|fb;rp`}
kp:{$[4>i:7h$x;c::{x|y&z}[(0;0);(#a;#a@*c)-1;c+:(0 1;0 -1;1 0;-1 0)i]
 i=10;[a::((c[0])#a),(,c[1]#a@*c),(,c[1]_a@*c),(1+c[0])_a;c::(1+*c;0);clr b]
 [a[*c]:{y,x,z}[x]/(0,c[1])_a[c 0];c+:0 1]]}
