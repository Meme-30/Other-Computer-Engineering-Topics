%Electrical cricuit problem in Mini-Project #2
clear, clc
Vr = 20;
Vc = -5;
V = sqrt(20^2 + 5^2);
theta = atand(Vc/Vr);
fprintf("V = %.2f⦟%.2f volts\n", V, theta);