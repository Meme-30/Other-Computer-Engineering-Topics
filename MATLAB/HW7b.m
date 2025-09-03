num=[0.1 0.35 0]; den=[1 3 2];
X=tf(num,den);
step(X)
grid
title('Response of X(s)=(0.1s+0.35)/(s^2 + 3s + 2)')
xlabel('t Sec')
ylabel('x m')