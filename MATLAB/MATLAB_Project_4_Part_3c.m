clc;
clear;
close all;

t = 0:0.001:0.74633;
h = -4.905*t.^2 + 0.981*t + 2.0;

plot(t,h);
title('Cannon Range');
xlabel('Time. seconds');
ylabel('Height, meters');
legend('Diver 1');
grid on;