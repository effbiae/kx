\p 5001
q:();GET:{(-h)x;while[#*a:h[];q::q,,a];if[#q;."\\t 200"];a[1;1]}
.z.ts:{$[#q;[x:*q;q::1_q;.z.ps x];."\\t 0"]};.z.po:{h::x;fs 0N!GET(.z.P;`);start[r;b];draw a};.z.ps:{.:x}
fs:{{-6!-5!x,":{GET[(.z.P;(`",x,";",z,";",(";"/:$y#"xyz"),"))]}"}.'(+($ x 0;x 1)),',:'$!#x 0}
c:1 5;a:("The quick brown fox jumps over the lazy dog";"in a quandry");fb:(f:0x00000000;b:0xAAAAAA00);r:200 200 900 300i;u:0N
k:{key x;draw a}
draw:{sp:{$[0=#x;," ";x]};s[q]l::(0i,'+\last'd),'d:pd'q:p[f;b]'sp'x;$[^u;0;t9 u];blink`;u::t[500i;`blink;0]}
blink:{q:(p . fb::|fb)@,a . c;s[q;@[l[*c];0 2;:;7h$(c[1]*u;u:*pd q)]]}
key:{$[4>i:7h$x;c::{x|y&z}[(0;0);(#a;#a@*c)-1;c+:(0 1;0 -1;1 0;-1 0)i]
 i=10;[a::((c[0])#a),(,c[1]#a@*c),(,c[1]_a@*c),(1+c[0])_a;c::(1+*c;0);clr b]
 [a[*c]:{y,x,z}[x]/(0,c[1])_a[c 0];c+:0 1]]}
