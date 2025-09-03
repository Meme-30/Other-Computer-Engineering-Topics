num=[1]; den=[0.01, 1];
X=tf(num,den);
step(X)
grid
title('System Response To Unit Step')
xlabel('t Sec')
ylabel('y(t) V')