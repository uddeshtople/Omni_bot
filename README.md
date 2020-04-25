# Omni Directional Mobile Robot
 This project has been presented in the 'International Conference on Advances in Mechanical Engineering, 2020'.
 Please cite this paper if you are using this repository:[paper](https://www.springer.com/in/book/9789811536380)
 #### Omni_bot
  ![Image](https://github.com/saad2121/Omni_bot/blob/master/omni_bot.jpg)

 ## Demo:
[video link](https://drive.google.com/file/d/12JdKOwPNl6Pa24-NKA-WGQgfvkBHokF6/view?usp=sharing)
  
 ## Abstract:
Mobile robots at present are used extensively in the industrial and commercial sectors. There is a need for a robot that can easily maneuver in the sparse space at the warehouse, stores, etc. Omnidirectional Mobile Robots are capable of maneuvering in all directions without changing its orientation on a flat surface. In our project we built a **Robust Sliding Mode Controller** for Omni wheeled mobile robot for trajectory tracking. We compare the result of sliding mode controller with standard PID controller and found that sliding mode controller gives much better accuracy than standard well-tuned PID controller.

## Instructions:
 We have implemented the **Robust Sliding Mode Controller(RSMC)** and **PID Controller** on Omni_bot using MATLAB-Simulink. Following are the instructions to use the Simulink Models.
 ##### Before running any simulink file, make sure that you have setup the configuration Parameters as
###### Solver Options
  * Type - Fixed Step
  * Solver - ode2(Heun)
###### Additional parameters
 * Fixed Step Size = 0.02
 #### Simulation of Omni_bot using PID Controller
 * Run **omnipid.m** in MATLAB
 * Run **omnipid_infinity.slx** in simulink 
 
  #### Simulation of Omni_bot using SMC Controller
 * Run **omnismc.m** in MATLAB
 * Run **omnismc_infinity.slx** in simulink 
 #### Deploy the Code on Hardware
 * Run **omnismc.m** in MATLAB
 * Deploy **omni_smc_infinity_arduino.slx.original** using Simulink (Make sure MATLAB Support package for Arduino is already Installed)
 #### Check Hardare
  To check the working of hardware, we used [Atduino IDE](https://www.arduino.cc/en/main/software) and run the code **OSquare.ino**, using this code bot performs square trajectory.
  
## Dependencies:
* [MATLAB](https://in.mathworks.com/products/matlab.html)
* [Simulink](https://in.mathworks.com/products/simulink.html)
* [MATLAB Support package for Arduino ](https://in.mathworks.com/matlabcentral/fileexchange/47522-matlab-support-package-for-arduino-hardware)
## Result:
#### Trajectory Tracking using PID and SMC 
![](https://github.com/saad2121/Omni_bot/blob/master/final%20trajectory.png)

## Contributors:
* Mohammad Saad
* Amrapali Khandare
* Uddesh Tople
* Zeeshanul Islam
