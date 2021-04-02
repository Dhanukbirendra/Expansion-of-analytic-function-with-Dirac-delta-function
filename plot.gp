set terminal epslatex size 4.8,4.20 standalone color colortext 10
set output 'data.tex'
set title 'sine expansion for N=50'
set xr [-2.00:2.00]
set yr [-2.5:2.5]
set style line 1 lt 1 lw 3 lc rgb 'red'
set style line 2 lt 1 lw 3 lc rgb 'blue'
set arrow from -2.00,0.0 to 2.00,0.0
set arrow from  0.0, -2.5 to 0.0, 2.5
set xl 't'
set yl 'f(t)'
plot 'data.txt' u 1:2 w l ti '$f_1(t)=sin(2\pi*t)$' ls 1,\
 'data.txt' u 1:3 w l ti '$f_2(t)=\int_{-5}^{5}sin(2\pi*x)F(N,x,t)dx$' ls 2
set output
system('latex data.tex')
 system('dvips data.dvi')
 system('ps2pdf data.ps')



