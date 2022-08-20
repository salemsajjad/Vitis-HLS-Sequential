# Here is the edge detector IP core desigend with Vitis HLS


We have a module that it has one input pulse and a clock. Then it can determine falling and rising edge and shows them in its output.

After C simulation we can see this report:

![alt text](https://github.com/salemsajjad/Vitis-HLS-Sequential/blob/main/09-Edge_Detector/Csimulation.JPG?raw=true)

After RTL/C Co simulation we can see this waveform:

![alt text](https://github.com/salemsajjad/Vitis-HLS-Sequential/blob/main/09-Edge_Detector/waveform.JPG?raw=true)

I've used Digilent #PYNQ #Z1 and tested these projects on this board.

Note: The Xilinx Vivado and Vitis tools that I used in these projects is the #2020.2 vesrion. 

--> Thanks to Professor Mohammad Hosseinabady for his useful HLS course.
