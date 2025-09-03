clear, clc
%Create Original Matricies:
a = [12, 17, 3, 6];
b = [5, 8, 3; 1, 2, 3; 2, 4, 6];
c = [22; 17; 4];

disp("#1:");
x1 = a(2);
fprintf("%d\n\n", x1);

disp("#2");
x2 = b(:,3);
fprintf("%d ", x2);
fprintf("\n\n");

disp("#3");
x3 = b(3,:);
fprintf("%d ", x3);
fprintf("\n\n");

disp("#4");
x4 = diag(b);
fprintf("%d ", x4);
fprintf("\n\n");

disp("#5");
x5 = a(:,1:3);
fprintf("%d ", x5);
fprintf("\n\n");

disp("#6");
x6 = [c(:,1)];
%Note: Matrix c only has one column.
x6(4) = b(1,2);
x6(5) = b(2,2);
x6(6) = b(3,2);
x6(7) = b(1,3);
x6(8) = b(2,3);
x6(9) = b(3,3);
%Note: Matrix b did not have a 4th column.
x6(10) = a(1,1);
x6(11) = a(1,2);
x6(12) = a(1,3);
x6(13) = a(1,4);
%Note; Matrix a only has one row.
fprintf("%d ", x6);
fprintf("\n\n");

disp("#7");
x7 = b(8);
fprintf("%d ", x7);
fprintf("\n\n");

disp("#8");
x8 = b(:);
fprintf("%d ", x8);
fprintf("\n\n");