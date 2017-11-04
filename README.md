# tm4c_gnu
TM4C123GH6PM files for GNU MCU IDE
These are the CMSIS files needed for the GNU MCU Eclipse addons (https://gnu-mcu-eclipse.github.io/)
They need to be put in the following folders of your project:
      TM4C123GH6PM.h					system/include/cmsis
      system_TM4C123.h				system/include/cmsis
      system_TM4C123.c				system/src/cmsis
      vectors_TM4C123H6PM.h		system/src/cmsis

The startup file is only included here as a reference for the vectors file.
