clear; clc
F1x = 100;
F1y = 0;
A = [-cosd(56.3), cosd(31.0), 0, 0, 0, 0;
    -sind(56.3), -sind(31.0), 0, 0, 0, 0;
    cosd(56.3), 0, 1, 1, 0, 0;
    sind(56.3), 0, 0, 0, 1, 0;
    0, -cosd(31.0), -1, 0, 0, 0;
    0, sind(31.0), 0, 0, 0, 1];
B = [F1x; -F1y; 0; 0; 0; 0];
x = A\B;
disp("x =");
fprintf("%f   ", x);
fprintf("\n\n");