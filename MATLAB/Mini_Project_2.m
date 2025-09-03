%Create Clusters
x1 = randi([5, 30], 1, 33);
y1 = randi([5, 30], 1, 33);
price1 = (2.50 - 0.10).*rand(33, 1) + 0.10;
x2 = randi([40, 60], 1, 34);
y2 = randi([70, 95], 1, 34);
price2 = (6 - 2).*rand(34, 1) + 2;
x3 = randi([70, 95], 1, 33);
y3 = randi([5, 30], 1, 33);
price3 = (20 - 5).*rand(33, 1) + 5;
x = [x1 x2 x3];
y = [y1 y2 y3];
xbckp = x;  %Backup of x for later
ybckp = y;  %Backup of y for later
price = zeros(100);
for i = 1:33
    price(i) = price1(i);
end
for i = 1:34
    price(i+33) = price2(i);
end
for i = 1:33
    price(i+67) = price3(i);
end
priceBckp = price;
figure(1)
scatter(x,y)
title('Before')
grid
xlim([0,100])
ylim([0,100])
%Initialize Other Variables
budget = 75;
currentCost = 0;
G = [];
U = ones(100);  %List of flags that tracks coverage.
toCheck = ones(100);  %List of flags that tracks ignorance and coverage.
diskSize = 5;
deviceCount = zeros(100);
devicesPerPrice = zeros(100);
m = 0;
devicesTaken = 0;
for h = 1:100   %Worst case: check all 100 devices
    m = budget + 1;
    %Determine how many devices are in each disk excluding the center.
    for i = 1:100   %Source Device
        numDevices = 0;
        for j = 1:100   %Target Device
            if i ~= j   %Skip when the target is the source
                dist = sqrt((x(i)-x(j))^2+(y(i)-y(j))^2);
                if dist <= diskSize
                    numDevices = numDevices + 1;
                end
                deviceCount(i) = numDevices;
                devicesPerPrice(i) = deviceCount(i) / price(i);
            end
        end
    end
    maxRatio = 0;
    index = 0;
    for i = 1:100
        if devicesPerPrice(i) > maxRatio
            maxRatio = floor(devicesPerPrice(i));
            index = i;
        end
    end
    if currentCost + price(index) <= budget %If buying, remove the device and its affiliates
    %from both checked and yet to covere lists.
        G = [G index];
        currentCost = currentCost + price(index);
        for i = 1:100
            if sqrt((x(index)-x(i))^2+(y(index)-y(i))^2) <= diskSize
                U(i) = 0; %Mark element as covered.
                toCheck(i) = 0; %Remove from list of elements to check.
                x(i) = NaN;
                y(i) = NaN;
                price(i) = 76;
                devicesTaken = devicesTaken + 1;
            end
        end
    else %Otherwise, only remove the device from the list of checked devices.
        toCheck(index) = 0;
    end
    for i = 1:100
        if price(i) < m
            m = price(i);
        end
    end
end
figure(2)
scatter(x,y)
title('After')
grid
xlim([0,100])
ylim([0,100])
%Restore map for Sloppy Greedy algorithm
x = xbckp;
y = ybckp;
currentCostSloppy = 0;
minPrice = 76;
G = [];
U = ones(100);  %List of flags that tracks coverage.
toCheck = ones(100);  %List of flags that tracks ignorance and coverage.
devicesTakenSloppy = 0;
for h = 1:100
    minPrice = min(price);
    index = find(price == minPrice, 1);
    if currentCostSloppy + price(index) <= budget %If buying, remove the device and its affiliates
    %from both checked and yet to covere lists.
        G = [G index];
        currentCostSloppy = currentCostSloppy + price(index);
        for i = 1:100
            if sqrt((x(index)-x(i))^2+(y(index)-y(i))^2) <= diskSize
                U(i) = 0; %Mark element as covered.
                toCheck(i) = 0; %Remove from list of elements to check.
                x(i) = NaN;
                y(i) = NaN;
                devicesTakenSloppy = devicesTakenSloppy + 1;
            end
        end
    else %Otherwise, only remove the device from the list of checked devices.
        toCheck(index) = 0;
    end
    price(index) = 76;
end
figure(3)
scatter(x,y)
title('Sloppy')
grid
xlim([0,100])
ylim([0,100])
%Restore map for Random algorithm
x = xbckp;
y = ybckp;
price = priceBckp;
currentCostRandom = 0;
G = [];
U = ones(100);  %List of flags that tracks coverage.
toCheck = ones(100);  %List of flags that tracks ignorance and coverage.
devicesTakenRandom = 0;
for h = 1:100
    index = randi([1 100], 1);
    if currentCostRandom + price(index) <= budget && toCheck(index) == 1 %If buying, remove the device and its affiliates
    %from both checked and yet to covere lists.
        G = [G index];
        currentCostRandom = currentCostRandom + price(index);
        for i = 1:100
            if sqrt((x(index)-x(i))^2+(y(index)-y(i))^2) <= diskSize
                U(i) = 0; %Mark element as covered.
                toCheck(i) = 0; %Remove from list of elements to check.
                x(i) = NaN;
                y(i) = NaN;
                devicesTakenRandom = devicesTakenRandom + 1;
            end
        end
    else %Otherwise, only remove the device from the list of checked devices.
        toCheck(index) = 0;
    end
    price(index) = 76;
end
figure(4)
scatter(x,y)
title('Random')
grid
xlim([0,100])
ylim([0,100])
costAxis = linspace(0,75,10000);
devCostRat = devicesTaken / currentCost;
ourLine = devCostRat * costAxis;
devCostRatSloppy = devicesTakenSloppy / currentCostSloppy;
sloppyLine = devCostRatSloppy * costAxis;
devCostRatRandom = devicesTakenRandom / currentCostRandom;
randomLine = devCostRatRandom * costAxis;
figure(5)
clf
plot(costAxis, ourLine, 'Linewidth', 2); hold on;
plot(costAxis, sloppyLine, 'Linewidth', 2); hold on;
plot(costAxis, randomLine, 'Linewidth', 2); hold on;
grid
xlabel('Cost')
ylabel('Devices Covered')
xlim([0,75])
ylim([0,100])
legend({'Our Algorithm','Sloppy Greedy','Random'},'Location','Northwest')