%Step a:
fprintf("(a)\n");

%Define Variables:
m = 1;
c = 3;
k = 2;

%Calculate Roots:
root1 = (-c + sqrt(c^2 - 4*m*k))/(2*m);
root2 = (-c - sqrt(c^2 - 4*m*k))/(2*m);

%Display Answers:
fprintf("s = %.2f\n",root1);
fprintf("s = %.2f\n\n",root2);


%Step b:
fprintf("(b)\n");

%Define Variables:
m = 1;
c = 2;
k = 1;

%Calculate Roots:
root1 = (-c + sqrt(c^2 - 4*m*k))/(2*m);
root2 = (-c - sqrt(c^2 - 4*m*k))/(2*m);

%Display Answers:
fprintf("s = %.2f\n",root1);
fprintf("s = %.2f\n\n",root2);