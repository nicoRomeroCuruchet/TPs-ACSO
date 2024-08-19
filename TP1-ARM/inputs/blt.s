.text
cmp X11, X12
blt foo
adds X2, X0, 10

bar:
HLT 0

foo:
cmp X11, X12
blt bar
adds X3, X0, 10

HLT 0
