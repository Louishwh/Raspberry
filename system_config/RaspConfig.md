### 一. 配置树莓派系统：

>###  sudo raspi-config：

>### System：

>>Expand Filesystem --> 拓展内存卡可用空间

>>Enable Boot to Desdtop --> 开机进入的环境

>>Change User Password--> 　修改用户密码

>>Internationlisation Options --> 语言和时区设置

>### Interfaces：

>###Performace:

>###Localisation:

### 二. 安装相关的软件：

> 安装谷歌浏览器Chromium：

 >>`sudo apt-get install chromium-browser chromium-l10n`
    
>安装中文字库：
>>`sudo apt-get install ttf-wqy-zenhei `

>安装中文输入法：

>>sudo apt-get install scim-pinyin 

>>sudo raspi-config

>>change_locale:

>>>Default locale for the system environment

>>>zh_CN

>>sudo reboot (重启计算机)

>解锁root账户：

>>sudo passwd --unlock root

>更新源：

>>    sudo cp /etc/apt/sources.list sudo cp /etc/apt/sources.list_bk

>>  sudo nano /etc/apt/suorces.list

>>文件写入：

>>deb http://mirror.nus.edu.sg/raspbian/raspbian/ wheezy 

>>main contrib non-free rpi

>>deb-src http://mirror.nus.edu.sg/raspbian/raspbian/wheezy 

>>main contrib non-free rpi

> 远程登录

>>sudo apt-get install tightvncserver

>>vncserver -geometry 1024x768
    
>>sudo apt-get install xrdp

>>最好是路由器根据MAC地址分配固定的IP地址

> 音频设置

>>    omxplayer -o local filename.mp4 	3.5mm

>>    omxplayer -o hdmi filename.mp4 

>蓝牙设置：


>>    lsusb      //查看设备

>>    sudo su    //切换root权限


>> apt-get install bluetooth bluez-utils bluez-compat blueman

>>    server bluetooth status //启动蓝牙设备

>>    startx // 切换到图形界面
    
>>    连接蓝牙设备：

>>>    sudo bluetoothctl

>>>  list

>>>   power on

>>>   scan on 

>>>   agnet on 

>>>    pair E8:07....(设备号)

>>>    trust E8:07....(设备号)

>>>   connect E8:07....(设备号)

>>>连接蓝牙音响：

>>> 	sudo apt-get install pulseaudio pulseaudio-module-bluetooth
    
> Wifi设置：
>>    iwlist scan
>>    sudo vim /etc/wpa_supplicant/wap_supplicant.conf
>>    ifconfig wlan0