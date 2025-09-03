clear, clc
disp("1.");
fprintf("%f\n\n",sin(2*(3*pi)));


disp("2.");
fprintf("cos(0)=%f\n",cos(0));
fprintf("cos(0.2pi)=%f\n",cos(0.2*pi));
fprintf("cos(0.4pi)=%f\n",cos(0.4*pi));
fprintf("cos(0.6pi)=%f\n",cos(0.6*pi));
fprintf("cos(0.8pi)=%f\n",cos(0.8*pi));
fprintf("cos(pi)=%f\n",cos(pi));
fprintf("cos(1.2pi)=%f\n",cos(1.2*pi));
fprintf("cos(1.4pi)=%f\n",cos(1.4*pi));
fprintf("cos(1.6pi)=%f\n",cos(1.6*pi));
fprintf("cos(1.8pi)=%f\n",cos(1.8*pi));
fprintf("cos(2pi)=%f\n\n",cos(2*pi));


disp("3.");
fprintf("%f\n\n", asin(1));


disp("4.");
fprintf("arccos(-1)=%f\n", acos(-1));
fprintf("arccos(-0.8)=%f\n", acos(-0.8));
fprintf("arccos(-0.6)=%f\n", acos(-0.6));
fprintf("arccos(-0.4)=%f\n", acos(-0.4));
fprintf("arccos(-0.2)=%f\n", acos(-0.2));
fprintf("arccos(0)=%f\n", acos(0));
fprintf("arccos(0.2)=%f\n", acos(0.2));
fprintf("arccos(0.4)=%f\n", acos(0.4));
fprintf("arccos(0.6)=%f\n", acos(0.6));
fprintf("arccos(0.8)=%f\n", acos(0.8));
fprintf("arccos(1)=%f\n\n", acos(1));


disp("5.");

disp("a) Converting to radians first:");
fprintf("%f\n\n", cos(45*(pi/180)));

disp("b) Using cosd:");
fprintf("%f\n\n", cosd(45));


disp("6.");
fprintf("%f\n", asin(0.5));  %This answer is in radians.