\p 5001
lam:{(x;y)}q:();l:{$[#x;(,x),,y;,y]};GET:{(-h)x;while[(#b:0N!(0N!a)[1;1])&#*a:h[];q::l[q;b]];if[#q;."\\t 200"];b}
.z.ts:{$[#q;[x:*q;q::1_q;.z.ps x];."\\t 0"]};
fs:{{-6!-5!x,":{GET[(.z.P;(`",x,";",z,";",(";"/:$y#"xyz"),"))]}"}.'(+($ x 0;x 1)),'$!#x 0}
fg:0x00000000;bg:0x99999900;fb:(fg;bg);wr:200 200 900 300i
.z.po:{h::x;fs 0N!GET(.z.P;`);start[wr;bg]}
.z.ps:{.:x}
p:1 5;ti:0N
a:("99";"The quick brown fox jumps over the lazy dog")
k:{txf::tx[fg;bg];ttx a}
ttx:{rp rcp .'tx0 lam'lir::(0i,'+\last'wh),'wh:0N!txz'0N!tx0::txf'x;fb::(bg;fg);$[^ti;0;0N!tio[0N!ti]];0N!ti::tim[500i;`blink;0]}
blink:{fb::|fb;t:(tx . fb)@,a . p;rcp[t;@[lir[*p];0 2;:;7h$(p[1]*u;u:*txz 0N!t)]];rp`}
/k:{0N!(p;x;a);$[4>i:7h$x;p::0 0|/p+(0 1;0 -1;1 0;-1 0)i;[a[p 0]:({y,x,z}[x]/)(0,p[1])_a[p 0];p+:0 1]];txt a}
