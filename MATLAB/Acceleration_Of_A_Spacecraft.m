%If all the power (400 watts) were diverted to propulsion, how much
%acceleration would it produce in the spacecraft? Voyager 1 is traveling
%at 4 AU/yearand Voyager 2 is traveling at 5 AU/year. Both crafts have
%a mass of 1000 kg and use the same amount of power.

format short
mass = 1000;
power = 400;
velocity1 = 4;
velocity2 = 5;

%Velocity Conversion to m/sec
velocity1 = velocity1*150*10^9/365/24/3600;
velocity2 = velocity2*150*10^9/365/24/3600;

%Acceleration Calculation
acceleration1 = power/(mass*velocity1);
acceleration2 = power/(mass*velocity2);

%Display Accelerations
fprintf("Acceleration of Voyager 1:\n%i\n\n", acceleration1);
fprintf("Acceleration of Voyager 2:\n%i\n\n", acceleration2);