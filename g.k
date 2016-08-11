\p 5001
GET:{(-h)x;x:h[];x[1]};lam:{(x;y)}
fs:{{-6!-5!x,":{GET[(`",x,";",z,";",(";"/:$y#"xyz"),")]}"}.'(+($ x 0;x 1)),'$!#x 0}
.z.po:{h::x;fs 0N!GET`;start 200 200 900 300i}
.z.ps:{0N!.:x}
p:0 0
fg:0x00000000;bg:0x99999900
a:("99";"The quick brown fox jumped over the lazy dog")
k:{txf::tx[fg;bg];ttx a}
ttx:{rp rcp .'tx0 lam'lir::(0i,'+\last'wh),'wh:txz'tx0::txf'x;fb::(bg;fg);ti::tim[500;`blink;0]}
blink:{fb::|fb;tx1::tx0;tx1[*p]:(tx . fb)a[*p];rp rcp .'tx1 lam'lir} /;tio[ti]}
/k:{0N!(p;x;a);t:0N!tx "foxy doggy";rcp . 0N!(20 20i,t 0;t 1);rp`}
/k:{0N!(p;x;a);$[4>i:7h$x;p::0 0|/p+(0 1;0 -1;1 0;-1 0)i;[a[p 0]:({y,x,z}[x]/)(0,p[1])_a[p 0];p+:0 1]];txt a}
