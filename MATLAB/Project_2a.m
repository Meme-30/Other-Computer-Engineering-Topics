w=[0:0.1:500];   %Define range
H=1./(1+i*0.01*w);  %Dot before division allows us to apply a vector.
H_mag=abs(H);
H_angle=angle(H);

figure(1)
plot(w,H_mag)
grid
title('Magnitude')
xlabel('w')
ylabel('|H(jw)|')

figure(2)
plot(w,H_angle*180/pi) %Convert to degrees when plotting.
grid
title('Angle')
xlabel('w')
ylabel('<H(jw)')