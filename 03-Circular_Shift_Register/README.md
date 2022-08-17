# there is an Exmaple of using shift registers in Vitis HLS

In this example I've designed a circular shift register containing one static register.

The picture shows the HLS circular shift register module containing N=17 bit parallel input and output.

![alt text](https://github.com/salemsajjad/Vitis-HLS-Sequential/blob/main/03-Circular_Shift_Register/circular_shift.drawio.png?raw=true)



And here arethe Synthesis report and the waveform generation from the Co-Simulation:

![alt text](https://github.com/salemsajjad/Vitis-HLS-Sequential/blob/main/03-Circular_Shift_Register/Synthesis_Report.JPG?raw=true)


![alt text](https://github.com/salemsajjad/Vitis-HLS-Sequential/blob/main/03-Circular_Shift_Register/waveform.JPG?raw=true)



I've used Digilent #PYNQ #Z1 and tested these projects on this board.

Note: The Xilinx Vivado and Vitis tools that I used in these projects is the #2020.2 vesrion. 
