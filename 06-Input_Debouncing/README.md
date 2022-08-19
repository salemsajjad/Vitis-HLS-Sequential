# Here is my push-button debouncing IP core desigend with Vitis HLS


the picture shows a module has an input and an output.

we have two states : Transfer state and Delay state

Transfer state connects the input to the output directly and delay state enables after changing in input 
and keeps the output value unchanged for a few clocks in order to debouncing the input.

After RTL/C Co simulation we can see this waveform:

![alt text](https://github.com/salemsajjad/Vitis-HLS-Sequential/blob/main/06-Input_Debouncing/waveform1.JPG?raw=true)

![alt text](https://github.com/salemsajjad/Vitis-HLS-Sequential/blob/main/06-Input_Debouncing/waveform2.JPG?raw=true)

I've used Digilent #PYNQ #Z1 and tested these projects on this board.

Note: The Xilinx Vivado and Vitis tools that I used in these projects is the #2020.2 vesrion. 

--> Thanks to Professor Mohammad Hosseinabady for his useful HLS course. 
