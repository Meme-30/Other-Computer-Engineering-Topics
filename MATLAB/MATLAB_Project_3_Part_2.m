clear, clc
disp("i:");
disp("(a)");
A = [12, 4; 3, 5];
B = [2, 12; 0, 0];
C = A * B;
D = B * A;

disp("A * B = ");
fprintf("%d ", C(1,:));
fprintf("\n");
fprintf("%d ", C(2,:));
fprintf("\n\n");

disp("B * A = ");
fprintf("%d ", D(1,:));
fprintf("\n");
fprintf("%d ", D(2,:));
fprintf("\n\n");

disp("C ≠ D");
fprintf("\n");

disp("(b)");
A = [1, 3, 5; 2, 4, 6];
B = [-2, 4; 3, 8; 12, -2];
C = A * B;
D = B * A;
disp("A * B = ");
fprintf("%d ", C(1,:));
fprintf("\n");
fprintf("%d ", C(2,:));
fprintf("\n\n");

disp("B * A = ");
fprintf("%d ", D(1,:));
fprintf("\n");
fprintf("%d ", D(2,:));
fprintf("\n\n");

disp("A * B ≠ B * A");
fprintf("\n\n");

disp("ii:");
disp("(1)");
A = [2, 5; 2, 9; 6, 5];
B = [2, 5; 2, 9; 6, 5];
%C = A * B;
%D = B * A;
%disp("A * B = ");
%fprintf("%d ", C(1,:));
%fprintf("\n");
%fprintf("%d ", C(2,:));
%fprintf("\n");
%fprintf("%d ", C(3,:));
%fprintf("\n\n");
fprintf("These matricies cannot be multiplied.\n\n");

disp("(2)");
A = [2, 5; 2, 9; 6, 5];
B = [1, 3, 12; 5, 2, 9];
C = A * B;
D = B * A;
disp("These matricies can be multiplied.");

disp("A * B = ");
fprintf("%d ", C(1,:));
fprintf("\n");
fprintf("%d ", C(2,:));
fprintf("\n");
fprintf("%d ", C(3,:));
fprintf("\n\n");

disp("B * A = ");
fprintf("%d ", D(1,:));
fprintf("\n");
fprintf("%d ", D(2,:));
fprintf("\n");
disp("A * B ≠ B * A");
fprintf("\n");

disp("(3)");
A = [5, 1, 9; 7, 2, 2];
B = [8, 5; 4, 2; 8, 9];
C = A * B;
D = B * A;
disp("These matricies can be multiplied.");

disp("A * B = ");
fprintf("%d ", C(1,:));
fprintf("\n");
fprintf("%d ", C(2,:));
fprintf("\n\n");

disp("B * A = ");
fprintf("%d ", D(1,:));
fprintf("\n");
fprintf("%d ", D(2,:));
fprintf("\n");
disp("A * B ≠ B * A");
fprintf("\n");

disp("(4)");
A = [1, 9, 8; 8, 4, 7; 2, 5, 3];
B = [7; 1; 5];
%C = A * B;
%D = B * A;
disp("These matricies cannot be multiplied.");
fprintf("\n\n");

disp("iii:");
A = [-1, 3; 4, 2];
detA = det(A);
fprintf("The determinant of matrix A is %d\n", detA);