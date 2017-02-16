% simple_labels.mp -- do not edit, generated automatically by jinst-latex-sample.tex
input feynmp
require_RCS_revision "1.30";
beginchar(1, 40*2.84526pt#, 25*2.84526pt#, 0);
"feynmf: 1";
LaTeX_unitlength:=2.84526pt;
subgraph (0, 0, w, h);
vinit;
pickup pencircle scaled thin;
vleft (__i1, __i2);
vright (__o1, __o2);
vlabel ("\Pelectron ", __i1);
vlabel ("\APelectron ", __i2);
vlabel ("\Ptauon ", __o1);
vlabel ("\APtauon ", __o2);
vconnect ("fermion", __i1, __v1, __i2);
vconnect ("fermion", __o1, __v2, __o2);
vconnect ("photon,label=\Pphoton ,, \PZzero ", __v1, __v2);
vfreeze;
vdraw;
endsubgraph;
endchar;
% the end.
end.
endinput;
