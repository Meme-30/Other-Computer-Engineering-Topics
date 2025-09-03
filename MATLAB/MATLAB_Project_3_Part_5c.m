clear, clc
A = [-0.5548, -0.8572; 0.832, -0.515];
B = [-100; 0];

disp("Inverse Matrix:");
F = inv(A)*B;
disp("F2 =");
fprintf("%f\n", F);
fprintf("\n");

fprintf("Left Division:\n");
F = A\B;
disp("F2 =");
fprintf("%f\n", F);
fprintf("\n");