clear all;
clc

B_x=0.2;
B_y=0.2;
B_z=0.2;

B=10;
alpha=0.087;
a=0.22;
R=0.05;
M=5;
I=0.095;

si=-1.5+3.14*rand(1);
sihat=0.8;

Fex=-3+6*rand(1);
Fexhat=1;

h=a*rand(1);
hhat=a/2;

zetax=-1+2*rand(1);
zetay=-1+2*rand(1);
zetaz=-1+2*rand(1);

zetahat=0.2;

lambda1=5;
lambda2=5;
lambda3=5;