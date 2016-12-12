**Title Page**
This page should identify the device and microcontroller platform your project used. It should also list all the team members’ names.

*Team Bravo*

-Colby Tang

-Colton Eastland

-Angelo Renteria

*The following products were used for this project*

-Arduino

-Breadboard

-LCD 2x16

-Temperature Sensor (LM35)

- 10k Potentiometer

**Table of Contents**

Introduction			1
The Microcontroller Platform	2
The Test Device									
Development tools								
Experiment									
Conclusion			3
Contributions									
Project Code			

**Introduction**

In this section, you should describe the basic hardware components you chose to experiment with. You should also describe the experiment you are going to conduct that demonstrates that hardware. This section is not a detailed report on those components, just a basic introduction to   the parts you ended up with, and the demonstration you decided to set up.

The main hardware components that we used for this experiment is the LCD screen and the temperature sensor. This demonstration is to show how to use a temperature sensor to display the temperature on the LCD screen. (which is similar to a temperature gauge)

**The Microcontroller Platform**

Describe the microcontroller board you are using. This description should indicate where such boards can be obtained, and lay out the basic architecture of the board. You can paste screen captures of diagrams from any documentation you find online. You should describe the basic capabilities of the actual processor on the board. Show a block diagram of the device indicating any special features you find that are interesting and useful in conducting your experiment.

The Microcontroller Platform we are using is the Arduino Uno. You can order these boards online (Amazon etc.) or going to Fry’s (which have a lot of these technical tools). The processor on this Arduino is the ATmega328P which combines 32KB ISP flash memory with read-while-write capabilities.

**The Test Device**

Each project uses some kind of device that ends up being controlled by the microcontroller. Describe that device and give an overview of what it might be used for. Basically, describe what is involved in interacting with the device. Again, use screen captures of diagrams from documentation is you can.

With this project the Arduino communicates calculated data from the temperature sensor to the Arduino back to the LCD screen to display the final calculation which is the temperature is has taken.

**Development tools**

Detail the tools you needed to obtain to work with the microcontroller and the device. You also need to identify any additional software you needed to interact with your test device.

The tools that were critical to show that our project works would be the LCD screen to display the final result and the temperature sensor that would get the voltage and calculate temperature based off that.

**Experiment**

Describe the experiment you set up. What led you to pick this particular experiment (hopefully it was not because it was easy!) Be sure to show how your experiment was set up. Show how the device is connected to the microcontroller.

This experiment was set up using the Arduino board and implemented C and assembly code to have the correct display of the temperature. We chose this project because it’s a common device that most people would use on a daily basis but wouldn’t actually think about is how these thermometers work. Even though there is other options for a thermometer (such as the old school mercury in a glass tube type deal) this is the ideal process used in the modern type of temperature takers.

**Conclusions**

What did you learn about hardware control from this project? Did you get any ideas for other projects you might try in the future?

The Hardware exposure for this project was really surreal. This was finally the moment where we can actually see our code being put to use for a real life object that many people use on a regular basis. Yet it was challenging as well as interesting that something that everyone uses can be a little difficult to provide to a person. Other ideas that this could be used for would be to have the temperature not only be displayed on a LCD screen but to as well have a lighting bar that is red at the top and blue on the bottom actually show an estimate on how the temperature reading would look like on a mercury type thermometer. 


**Contributions**

Include a summary of each team member’s contributions to the project.

Colby Tang was in charge of the Arduino and did the majority of the hardware connections along with the code

Colton Eastland helped with the ideas and some implementation of what to do with the code and as well contributed to the Research Paper

Angelo Renteria helped with the ideas and some implementation of what to do with the code and as well contributed to the Research Paper


**Project code**

Include a listing of the code you used for this project.

