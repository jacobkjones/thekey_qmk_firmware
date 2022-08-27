# The Key V2

![The Key V2](https://massdrop-s3.imgix.net/product-images/stack-overflow-the-key-v2-macropad/FP/vSqOp9eUQNGXW4zl3EVQ_7528-copy-pdp.jpg)


The Stack Overflow "The Key V2" is a 3 button macropad based on atmega32u4 with hot-swappble Kailh Black Box switches.

> Last year, we brought Stack Overflow’s iconic April Fool’s joke to life. Advertised as the new (and only) way to copy and paste on the site, it was an ultra-compact macropad called The Key. The punchline-turned product was a huge hit, selling over 10K units and earning a nearly 5-star average review. Now, we’re back with a second act: The Key V2. The same size as its portable predecessor, this punchline-turned-product has a few notable changes—including an acrylic case to accent its two built-in RGB LEDs. Plus, we made it hot-swappable, so you can easily change out the switches for a truly custom experience. And just like the original, a portion of all proceeds from The Key V2 will go to the data-driven social startup digitalundivided.

Keyboard Maintainer: [Drop / Massdrop](https://github.com/Massdrop/qmk_firmware) 

Hardware Supported: Massdrop, Inc. **The Key V2**

Hardware Availability: Limited Release - https://drop.com/buy/stack-overflow-the-key-v2-macropad




# Jacob's *The Key V2* Configuration

The main keyboard file contained in this repository thus far in the `cp-rgb-media` contains multiple layers with various actions.

#### Layer 0  
**Left:** Layer Switch  
**Middle:** Copy (Ctrl+C)  
**Right:** Paste (Ctrl+V)  

#### Layer 1
**Left:** Layer Switch  
**Middle:** RGB Toggle On/Off  
**Right:** RGB Mode Change  

#### Layer 2
**Left:** Layer Switch  
**Middle:** RGB Brightness Down  
**Right:** RGB Brightness Up  

#### Layer 3
**Left:** Layer Switch  
**Middle:** Media Play/Pause  
**Right:** Media Next Track  

#### Layer 4
**Left:** Layer Switch  
**Middle:** Media Play/Pause  
**Right:** Media Previous Track  


A white light will flash on an individual LED to indicate which layer you have switch to. There are 5 positions, starting with the leftmost corner, moving to below the first key, then second key, then third key, then the bottom right corner.   

You will need to install QMK on your machine and generate a hex file using QMK. Then you flash the hex file onto the device. It's a simple process once you've got QMK and the QMK toolbox installed. 

[QMK MYSYS](https://github.com/qmk/qmk_distro_msys/blob/main/README.md)  
[QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases)


I highly recommend perusing the QMK docs to get some understanding if you want to customize and configure further. If you like my layout, you can simply download the hex file `massdrop_thekey_v2_cp-rgb-media.hex` from the `.build` folder and flash your *Key V2* with my hex file using QMK_Toolbox. 


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
Make example for this keyboard (after setting up your build environment):

## Bootloader

Enter the bootloader as follows:
* **Bootmagic reset**: Hold down the "Stack Overflow" key, the "left-most" or furthest from the USB plug while inserting the USB cable for a few seconds. The LEDs will **NOT** turn on.
* **Physical reset button**: Briefly press and hold the reset button while pluggin in the USB port. The LEDs on the back will **NOT** turn on. Depending on your case revision, you may have to remove the 4 screws on the back plate to access the switch OR you can use the associated access hole on newer releases.
