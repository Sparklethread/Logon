# Logon
This software is written in the Arduino programming language and is intended to be uploaded and executed on an Arduino board. It utilizes the HID (Human Interface Device) and Keyboard libraries to interact with a computer.

Here's a breakdown of what the code does:

The #include statements at the beginning of the code include necessary libraries for handling HID and Keyboard functionality.

The constants ButtonPin and ButtonPin2 are defined to specify the pins to which buttons are connected. In this case, button 1 is connected to pin 2, and button 2 is connected to pin 3.
In the setup() function, the pinMode for the button pins is set to INPUT_PULLUP, which means that when the buttons are not pressed, the pins will have a logic HIGH value. The Keyboard.begin() function initializes the Keyboard library.
Inside the loop(), the current state of the buttons is read using the digitalRead() function, and the result is stored in the variables Button and Button2.

The first if statement checks if Button is LOW, indicating that button 1 is pressed. If so, it emulates keyboard actions: pressing the return key (KEY_RETURN), releasing all keys (Keyboard.releaseAll()), delaying for 1 second (delay(1000)), printing the contents of Button_1 (Keyboard.print(Button_1)), pressing the return key again, releasing all keys, and delaying for 1 second.
The second if statement checks if Button2 is LOW, indicating that button 2 is pressed. If so, it emulates keyboard actions: pressing the left GUI key (Windows key) (KEY_LEFT_GUI), delaying for 100 milliseconds, pressing the 'l' key, delaying for 300 milliseconds, and releasing all keys.

The purpose of this software is creating a custom input device using buttons connected to an Arduino board. 
Button 1 is programmed to emulate typing the contents of Button_1 with a delay.
Button 2 is programmed to emulate a key combination for logging out of Windows by pressing the Windows key and 'l' key.
