clc;
clear;
close all;

t = 0:0.00001:0.004;
v1 = 10*sqrt(2)*sin(500*pi*t - 3*pi/4);
v2 = 10*sqrt(2)*sin(500*pi*t);

plot(t,v1,'b');
hold on;
plot(t,v2,'r');
title('Voltage vs Time');
xlabel('Time, seconds');
ylabel('Voltage, volts');
legend('Phase Shift = 3pi/4 rad','Phase Shift = 0 rad');
grid on;