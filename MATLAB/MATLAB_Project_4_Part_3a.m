%Clear Command Window and Reset Graph:
clc;
clear;
close all;

%Constants:
g = 9.9;
v1 = 50;
v2 = 100;

%Angle Vector:
angle = 0:0.05:pi/2;

%Range Calculation:
R1 = v1^2/g*sin(2*angle);
R2 = v2^2/g*sin(2*angle);

%Plot Results:
plot(angle,R1,angle,R2,':');
title('Cannon Range');
xlabel('Cannon Angle, rads');
ylabel('Range, meters');
legend('Initial Velocity = 50 m/s','Initial Velocity = 100 m/s');
grid on;