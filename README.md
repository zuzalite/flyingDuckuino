# flyingDuckuino
FlyingDuckuino is an Arduino combined with a 433mhz receiver module to perform several radio controlled USB HID attacks.

What if you want to use a rubber ducky to perform an USB HID attack and your victim does not leave his pc without logging off or at least locking it? You could use an Arduino micro to perform several attacks per remote controll from a secure distance when you see your victim is working on the target device again. 

###con: 
You´ll have to wait a while to let a windows machine install the necessary driver. At this time the victim could see in the status bar that there is a new device attached and possibly check the device. In this case of course you lost...
###pro: 
If your victim does not discover the device you can run several preprogrammed attacks per remote controll at the time you decide and as often you wish or at least as long as the flyingDuckino is not discovered.


##Prerequisites
Of course you will need an Arduino/Genuino Micro/Leonardo or at least a compatible board (Please support Arduino/Genuino by at least buying one board, if you do not own one yet) and the Arduino IDE. You'll need to download the The RCSwitch Libary available under https://github.com/sui77/rc-switch and put it into the libaries folder within the Aduino folder.
Additional you will need a 433mhz receiver module and a breadboard, some jumper wires or some soldering skills.
To remote controll the Arduino you will need a standard radio remote controll for sockets (or maybe another arduino attached with a 433mhz sender module).

##Instructions
1. Take your Arduino/Genuino Micro/Leonardo and connect it with a 433 mhz receiver module like Micro433MhzReceiver.png shows.
2. Write some Arduino sektches for USB HID attacks yourself or check out a rubber ducky script converter like https://github.com/BesoBerlin/ducky2arduino to convert any payload into an arduino sketch.
3. Copy and paste the code for the attack as a "atackX()" function into the ExampleCode.ino.
4. Compile and upload the sketch to your arduino and open the Serial Monitor.
5. Take your remote controll and press a button. The Serial Monitor will show you the sent value of your remote control.
6. Edit the value as codeX in the ExampleCode.ino sketch to run attackX when pressing this button.
7. Add as much attacks as you wish and enjoy.


##Resources
Ducky2Arduino https://github.com/BesoBerlin/ducky2arduino

Duckyscript https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Duckyscript

RCSwitch for Arduino https://github.com/sui77/rc-switch

###Important Note
I am not responsible for any illegal action. If you use this for any illegal purpose you will possibly go to jail!
