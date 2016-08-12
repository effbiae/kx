\p 5001
GET:{(-h)x;x:h[];x[1]};lam:{(x;y)}
fs:{{-6!-5!x,":{GET[(`",x,";",z,";",(";"/:$y#"xyz"),")]}"}.'(+($ x 0;x 1)),'$!#x 0}
fg:0x00000000;bg:0x99999900;fb:(fg;bg);wr:200 200 900 300i
.z.po:{h::x;fs 0N!GET`;start [wr;bg]}
.z.ps:{.:x}
p:1 5
a:("99";"The quick brown fox jumped over the lazy dog")
k:{txf::tx[fg;bg];ttx a}
ttx:{rp rcp .'tx0 lam'lir::(0i,'+\last'wh),'wh:txz'tx0::txf'x;fb::(bg;fg);$[`ti in ."\\v";tio[ti];0];ti::tim[500;`blink;0]}
blink:{fb::|fb;t:(tx . fb)@,a . p;rcp[t;0N!@[lir[*p];0 2;:;7h$(p[1]*u;u:*txz t)]];rp`}
/k:{0N!(p;x;a);$[4>i:7h$x;p::0 0|/p+(0 1;0 -1;1 0;-1 0)i;[a[p 0]:({y,x,z}[x]/)(0,p[1])_a[p 0];p+:0 1]];txt a}
