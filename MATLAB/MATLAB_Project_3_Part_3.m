clear, clc
disp("i:");
disp("(a)");
A = [-2, 1; 1, 1];
B = [3; 10];

fprintf("\nLeft Division:\n");
x = A\B;
fprintf("%f\n", x);
fprintf("\n");

disp("Inverse Matrix:");
x = inv(A)*B;
fprintf("%f\n", x);
fprintf("\n\n");

disp("(b)");
A = [5, 3, -1; 3, 2, 1; 4, -1, 3];
B = [10; 4; 12];

fprintf("\nLeft Division:\n");
x = A\B;
fprintf("%f\n", x);
fprintf("\n");

disp("Inverse Matrix:");
x = inv(A)*B;
fprintf("%f\n", x);
fprintf("\n\n");


disp("ii:");
A = [3, 4, 2, -1, 1, 7, 1; 2, -2, 3, -4, 5, 2, 8; 1, 2, 3, 1, 2, 4, 6; 5, 10, 4, 3, 9, -2, 1; ...
    3, 2, -2, -4, -5, -6, -7; -2, 9, 1, 3, -3, 5, 1; 1, -2, -8, 4, 2, 4, 5];
B = [42; 32; 12; -5; 10; 18; 17];

fprintf("\nLeft Division:\n");
tic;
x = A\B;
time = toc;
fprintf("%f\n", x);
fprintf("Time elapsed = %f seconds.\n\n", time);

disp("Inverse Matrix:");
tic;
x = inv(A)*B;
time = toc;
fprintf("%f\n", x);
fprintf("Time elapsed = %f seconds.\n\n", time);