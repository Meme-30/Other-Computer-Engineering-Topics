%Box on hinged shelf problem in Mini-Project #2
%Note: Capital F indicated a force's vector and a lowercase f represents a
%scalar.
clear, clc
disp("a)");
direction = [180, 221.7, 270];  %[f1, f2, w]
weight_magnitude = 125;
unit_fx = 1.*cosd(direction);
unit_fy = 1.*sind(direction);
fprintf("F1 = %df1i + %df1j lb\n", unit_fx(1), unit_fy(1));
fprintf("F2 = %ff2i + %ff2j lb\n", unit_fx(2), unit_fy(2));
fprintf("W = %dwi + %dwj lb\n\n", unit_fx(3), unit_fy(3));

disp("b)");
weight = weight_magnitude * sind(direction(3));
%X-dir: -f1 - 0.7466f2 = 0 ---> f1 = -0.7466f2
%Y-dir: 0.6652f2 - 125 = 0 ---> f2 = (125)/(0.6652)
f2 = weight/unit_fy(2);
f1 = unit_fx(2) * f2;
magnitude = [f1, f2, weight];
fprintf("f1 = %.1f lb\nf2 = %.1f lb\n", magnitude(1), magnitude(2));