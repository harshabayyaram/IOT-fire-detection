# IOT-fire-detection

# Abstract and main idea
Fire alarm systems are essential in alerting people before fire engulfs their homes. However, fire alarm systems, today, require a lot of wiring and labor to be installed. This discourages users from installing them in their homes. Therefore, an IoT based
wireless fire alarm system is easy to install. The proposed system consists of a microcontroller (ESP8266 nodeMCU) connected to an infrared flame sensor that continuously senses the surrounding environment to detect the presence of fire. The
microcontrollers create their own Wi-Fi network. Once fire is detected by a sensor, it sends a signal to a microcontroller that is triggered and alert the house by producing an alarm sound. Notification/warning is sent to the mobile phone using blynk app.

# process to run
1. get the copy in your local
2. Open in ARduino IDE
3. Install all required libraries mentioned in code from Tools--> Library manager.
4. Connect the digital pin of Fire sensor to the D1 pin and buzzer pin to the D2.
5. Dump the code into NodeMCU
6. Set the Blynk IOT website and app
