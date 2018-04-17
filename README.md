# Driving a Vehicle with PID Control
##### Udacity SDCND Term 2, Project 4

### Project
In this C++ project, I use a Proportional-Integral-Derivative Controller, or PID for short, in order to drive a simulated car around a virtual track. I have controled the steering angle of the car using a PID control whose hyperparameters were tuned manually by me.

### Components of PID

The Controller we are using in this project are the propotional, intergal and differencial control. The error we consider is the Cross Track Error(CTE) which is basically says us how far the car is from the center of the road.

**Propotional Control:**

The propotional control will steer the car propotional to the CTE. This will help us minimize the error and the propotionality between the CTE and the Steer value is determined by the constant Kp. Although an higher Kp will steer alot, it can also cause the car to oscillate a lot and make the car to overshoot and over correct multiple times.

**Intergral Control:**

The Intergral control will steer the car propotional to all the errors in the past, i.e it considers the sum of all the past CTE and then take a control action. The amount of correst depends on the constant Ki. Intergral control helps to overcome the system bais and reach the setpoint in a smooth way but if the Ki is too large it incudes way too many oscillations.

**Differencial Control:**

The Control action of this control depends on the deravative of the errors. That is it considers the change of error (sometimes change of input) to take corrective action. The propotionality is given by a constant Kd. Differencial controller help to reduce oscillation but if the Kd is too low the osciallation becomes larger and larger.

### Final Hyperparameters:

The final values I choose for Kp,Ki and Kd are as follows:

Kp = 0.1
Ki = 0.01
Kd = 0.5

I manual tweaked each value and observed the output before finallizing on this value. While trying different value i found for a PID control the Kp acts well in the range 0.25 - .07 when Ki is of the range 0.007 - 0.011 and the Kd is of the range 0.4-0.7. 

Personally I found these value to run smooth on my system and hence left them at 0.1,0.01 and 0.5. I used my understanding and intuition to tweak the values. 

### Future Work:

I will continue to work on the project until I can run this simulation by using the following controllers individually:

1) P control
2)PI control
3)PD control
4)PID control.
