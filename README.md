#CopperLamp
Simple app to control my desk lamp with arduino uno and hc-06 bluetooth module.

#Project Assumptions
I didn't have a desk lamp. Ikea is to far from place where I leave so I build my own lamp with copper pipes.
I wake up about 5 a.m and I'm too lazy to get up from bed and turn light on. So I decided to build this simple app to make my life little easier.


#Librarys and packages:
- Butterknife 
- BluetoothSPP


#Arduino Connection:
- I used HC-05 module on draw but it doesn't matter if you use module HC-05 or HC-06. Only difference is that HC-05 can act as a slave and master whereas HC-06 works only as a slave,
- In this project I used SRD-05-VDC-SL-C relay,
- Led lamp on scheme replaces bulb for 230V. Brown wire is a phase and its connect to common on relay. You have to connect neutral wire and phase from relay to luminaire. 
![ScreenShot](https://cloud.githubusercontent.com/assets/12597823/20869194/7f85d75e-ba6d-11e6-9720-a46804be87b8.png)

