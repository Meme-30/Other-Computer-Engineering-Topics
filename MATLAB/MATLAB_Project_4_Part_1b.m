clc;
clear;
close all;
x=[0:1:10];
y=sin(x);
plot(x,y)
title('y = sin(x)')% adds title to graph
xlabel('Time, t, s')      % adds label on x-axis, note text is enclosed by single quotes ‘ text ‘
ylabel('Distance, d, ft')     % adds label on x-axis 
grid on     % turns grid lines on