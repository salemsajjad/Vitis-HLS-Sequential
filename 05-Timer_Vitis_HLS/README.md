# Here is my HLS Timer IP core desigend with Vitis HLS


the picture shows a module has one N-bit input for determining the Timing Interval and a "Start" port and "End" output.

When the timer receives a logic value '1' ib Start input, it counts n-clock cycles and activates the End output.

![alt text](https://github.com/salemsajjad/Vitis-HLS-Sequential/blob/main/05-Timer_Vitis_HLS/Photos/timer_block_diagram.png?raw=true)

And in C simulation report we have:

![alt text](https://github.com/salemsajjad/Vitis-HLS-Sequential/blob/main/05-Timer_Vitis_HLS/Photos/Csimulation%20output.JPG?raw=true)

After RTL/C Co simulation we can see this waveform:

![alt text](https://github.com/salemsajjad/Vitis-HLS-Sequential/blob/main/05-Timer_Vitis_HLS/Photos/waveform.JPG?raw=true)

I've used Digilent #PYNQ #Z1 and tested these projects on this board.

Note: The Xilinx Vivado and Vitis tools that I used in these projects is the #2020.2 vesrion. 

--> Thanks to Professor Mohammad Hosseinabady for his useful HLS course.

