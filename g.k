\p 5001
lam:{(x;y)};q:();GET:{(-h)x;while[#*a:h[];q::q,,a];if[#q;."\\t 200"];a[1;1]}
.z.ts:{$[#q;[x:*q;q::1_q;.z.ps x];."\\t 0"]};
fs:{{-6!-5!x,":{GET[(.z.P;(`",x,";",z,";",(";"/:$y#"xyz"),"))]}"}.'(+($ x 0;x 1)),'$!#x 0}
f:0x00000000;b:0x99999900;fb:(f;b);wr:200 200 900 300i
.z.po:{h::x;fs 0N!GET(.z.P;`);start[wr;b]}
.z.ps:{.:x}
p:1 5;ti:0N
a:("Ipsum facto ego ergo deum";"has five chars";"The quick brown fox jumps over the lazy dog")
k:{kp x;ttx a}
ttx:{rp rcp .'tx0 lam'ld::(0i,'+\last'd),'d:txz'tx0::tx[f;b]'x;fb::(b;f);$[^ti;0;tio[ti]];blink`;ti::tim[500i;`blink;0]}
blink:{t:(tx . fb)@,a . p;rcp[t;@[ld[*p];0 2;:;7h$(p[1]*u;u:*txz t)]];fb::|fb;rp`}
kp:{$[4>i:7h$x;p::{x|y&z}[(0;0);(#a;#a@*p)-1;p+:(0 1;0 -1;1 0;-1 0)i];[a[p 0]:{y,x,z}[x]/(0,p[1])_a[p 0];p+:0 1]]}
