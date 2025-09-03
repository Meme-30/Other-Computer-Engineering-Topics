L=10e-3; C=1e-6; R=[50 10 1 0.5 0, -1];

for i=1:6
    den=[L*C, R(i)*C, 1];
    roots(den)
    r=roots(den);
    figure(1)
    plot(r, 'o'); hold on;
end
xlim([-3000, 500])
ylim([-12000, 12000])
xlabel('Real')
ylabel('Imaginary')
grid

figure(2)
R=-1;   %Toggle between all R values
num=[1]; den=[L*C R*C 1];

G=tf(num,den);
step(G);
xlabel('Time (t)')
ylabel('y(t) (V)')
grid