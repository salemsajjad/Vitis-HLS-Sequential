# Here is an Exmaple of using State Machine in Vitis HLS

In this example I've showed a simple State Machine in HLS C/C++ for unlocking a door.

As the picture is shown below the module has one 4-bit input for the key and two binary Enter and Lock inputs.

For the outputs we have an one.bit door_open and an 8-bit seven segment outputs.

![alt text](https://github.com/salemsajjad/Vitis-HLS-Sequential/blob/main/04-State_Machine_Lock/statemachine.jpg?raw=true)

I've used Digilent #PYNQ #Z1 and tested these projects on this board.

Note: The Xilinx Vivado and Vitis tools that I used in these projects is the #2020.2 vesrion. 

--> Thanks to Professor Mohammad Hosseinabady for his useful HLS course.
