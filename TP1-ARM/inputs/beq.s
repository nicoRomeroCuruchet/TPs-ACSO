.text
cmp X11, X11
beq foo
adds X2, X0, 10

bar:
HLT 0

foo:
cmp X11, X11
beq bar
adds X3, X0, 10
HLT 0
