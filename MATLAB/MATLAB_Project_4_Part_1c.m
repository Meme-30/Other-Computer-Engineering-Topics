clc;
clear;
close all;
x=[0:1:10];
y=5*x.^2+2*x+4;
plot(x,y)
title('y = 5x^2+2x+4')% adds title to graph
xlabel('Time, t, s')      % adds label on x-axis, note text is enclosed by single quotes ‘ text ‘
ylabel('Distance, d, ft')     % adds label on x-axis 
grid on     % turns grid lines on