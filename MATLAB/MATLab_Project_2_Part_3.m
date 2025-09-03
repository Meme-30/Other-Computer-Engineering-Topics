%Hot air balloon in Mini-project #2
clear, clc
Force = [100, 200, 75]; %[gravity, buoyancy, wind]
theta = [-90, 90, 20]; %angles associated with Force in degrees
%convert angles to radians
theta=theta*pi/180;
%find the x components
ForceX=Force.*cos(theta);
%sum the x-components
ForceX_total=sum(ForceX);
%find the y components
ForceY=Force.*sin(theta);
%sum the y-components
ForceY_total=sum(ForceY);
%find the resulting angle in radians
result_angle=atan(ForceY_total/ForceX_total);
%find the resulting angle in degrees
result_degrees=result_angle*180/pi;
%find the magnitude of the resulting force
Force_total=ForceX_total/cos(result_angle);
fprintf("Total Force: %f N @ %.1f degrees",Force_total, result_degrees);