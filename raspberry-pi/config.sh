#!/bin/bash
# setup and configure Raspberry Pi.

# update packages
#sudo apt-get update && sudo apt-get upgrade -y

## Configuration
CONFIG=/boot/config.txt
CMDLINE=/boot/cmdline.txt

# enable 1-wire
echo "** Enable 1-wire interface (GPIO4) **"
sudo sed $CONFIG -i -e "s/^#dtoverlay=w1-gpio/dtoverlay=w1-gpio/"
if ! grep -q -E "^dtoverlay=w1-gpio" $CONFIG; then
    sudo sh -c "printf 'dtoverlay=w1-gpio\n' >> $CONFIG"
fi

# install pip libraries
cd ./python
sudo python3 -m pip install -r requirements.txt
cd ..
