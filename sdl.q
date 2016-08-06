\p 5001
GET:{(neg h)x;x:h[];x[1]}
fs:{{eval parse x,":{GET[(`",x,";",z,";",(";"sv string y#"xyz"),")]}"}.'(flip (string x 0;x 1)),'string til count x 0}
.z.po:{h::x;fs 0N!GET`}
.z.ps:{0N!value x}
a:(0#" ";"The quick brown fox jumped over the lazy dog")
k:{a[0],:x;txt a}
