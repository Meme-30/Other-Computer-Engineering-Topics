clc;
clear;
close all;
x=[0:1:10];
y=sqrt(x);
plot(x,y)
title('y = sqrt(x)')% adds title to graph
xlabel('Time, t, s')      % adds label on x-axis, note text is enclosed by single quotes ‘ text ‘
ylabel('Distance, d, ft')     % adds label on x-axis 
grid on     % turns grid lines on