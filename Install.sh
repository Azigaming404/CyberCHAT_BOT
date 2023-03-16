#!/bin/bash
echo "-------------------------------------"
echo "Set auto installation"
echo "-------------------------------------"
sudo apt install python3
sudo apt install python3-pip
sudo apt install unzip
sudo apt install ruby
gem install lolcat
sudo apt install figlet
sudo apt install php
sudo apt install git nodejs -y
wget https://raw.githubusercontent.com/Azigaming404/CyberCHAT_BOT/main/node_modules.zip
unzip node_modules.zip
wget https://raw.githubusercontent.com/Azigaming404/CyberCHAT_BOT/main/banner.sh
wget https://raw.githubusercontent.com/Azigaming404/CyberCHAT_BOT/main/3d.flf
sudo mv 3d.flf /usr/share/figlet/
wget https://raw.githubusercontent.com/Azigaming404/CyberCHAT_BOT/main/index.js
wget https://raw.githubusercontent.com/Azigaming404/CyberCHAT_BOT/main/key.json
wgethttps://raw.githubusercontent.com/Azigaming404/CyberCHAT_BOT/main/main.py
wget https://raw.githubusercontent.com/Azigaming404/CyberCHAT_BOT/main/package.json
wget https://raw.githubusercontent.com/Azigaming404/CyberCHAT_BOT/main/requirements.txt
wget https://raw.githubusercontent.com/Azigaming404/CyberCHAT_BOT/main/sansekai.js
wget https://raw.githubusercontent.com/Azigaming404/CyberCHAT_BOT/main/setup

wget https://raw.githubusercontent.com/Azigaming404/CyberCHAT_BOT/main/update
pip3 install -r requirements.txt
chmod 777 setup
