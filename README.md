# SampleEmptyLinuxDeviceDriver

Reference

    The Linux Kernel Module Programming Guide 
      (http://www.tldp.org/LDP/lkmpg/2.6/html/)
    Linux Device Drivers, Third Edition 
      (https://lwn.net/Kernel/LDD3/)
  
How to build and load module

    $ git clone https://github.com/ArtisteHsu/SampleEmptyLinuxDeviceDriver.git
    $ cd SampleEmptyLinuxDeviceDriver/
    $ make

How to load module and check if module is loaded

    $ sudo insmod SampleModule,ko
    $ lsmod | grep SampleModule

How to unload module

    $ sudo rmmod SampleModule
