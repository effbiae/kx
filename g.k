\p 5001
lam:{(x;y)};q:();l:{$[#x;(,x),,y;,y]};GET:{(-h)x;while[#*a:h[];q::l[q;a]];if[#q;."\\t 200"];a[1;1]}
.z.ts:{$[#q;[x:*q;q::1_q;.z.ps x];."\\t 0"]};
fs:{{-6!-5!x,":{GET[(.z.P;(`",x,";",z,";",(";"/:$y#"xyz"),"))]}"}.'(+($ x 0;x 1)),'$!#x 0}
f:0x00000000;b:0x99999900;fb:(f;b);wr:200 200 900 300i
.z.po:{h::x;fs 0N!GET(.z.P;`);start[wr;b]}
.z.ps:{.:x}
p:1 5;ti:0N
a:("Ipsum facto ego ergo deum";"has five chars";"The quick brown fox jumps over the lazy dog")
k:{kp x;ttx a}
ttx:{rp rcp .'tx0 lam'lir::(0i,'+\last'd),'d:0N!txz'0N!tx0::tx[f;b]'x;fb::(f;b);$[^ti;0;0N!tio[0N!ti]];blink`;ti::tim[500i;`blink;0]}
blink:{t:(tx . fb)@,a . p;rcp[t;@[lir[*p];0 2;:;7h$(p[1]*u;u:*txz 0N!t)]];fb::|fb;rp`}
kp:{$[4>i:7h$x;p::p&/0 0|/p::p+(0 1;0 -1;1 0;-1 0)i;[a[p 0]:({y,x,z}[x]/)(0,p[1])_a[p 0];p+:0 1]]}
