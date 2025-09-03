clear, clc
disp("1.");
x = [-2, -1, 0, 1, 2];

disp("a)");
disp(abs(x(1)));
disp(abs(x(2)));
disp(abs(x(3)));
disp(abs(x(4)));
disp(abs(x(5)));

disp("b)");
disp(sqrt(x(1)));
disp(sqrt(x(2)));
disp(sqrt(x(3)));
disp(sqrt(x(4)));
disp(sqrt(x(5)));


disp("2.");

disp("a)");
disp(sqrt(3));
disp(sqrt(-3));

disp("b)");
%disp(nthroot(3, 2));
%disp(nthroot(-3, 2));
disp("Errors generated. Skipping...");

disp("c)");
disp(3^(1/2));
disp(-3^(1/2));
%The square root function permits complex results, whereas nthroot doesn't
%and raising to a fractional power expresses an imaginary number as if it
%were real.


disp("3.");
x = [-9:3:12];

disp("a)");
disp(x/2);

disp("b)");
disp(rem(x,2));


disp("4.");
disp(exp(x));


disp("5.");

disp("a)");
disp(log(x));

disp("b)");
disp(log10(x));


disp("6.");
disp(sign(x));