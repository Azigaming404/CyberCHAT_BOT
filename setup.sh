#!/bin/bash
ungu='\033[0;35m'

clear
sleep 1
echo "==================================================" | lolcat
figlet -f block "CyberCHAT" | lolcat
echo "==================================================" | lolcat
echo "__________________________________________________" | lolcat
echo "                 script by: A7i" | lolcat
echo "                  V.2.1 LTS" | lolcat
echo "__________________________________________________" | lolcat
echo
echo "==================================================" | lolcat
echo "                      menu" | lolcat
echo "1.start bot" | lolcat
echo "2.update bot" | lolcat
echo -e "${ungu}"
echo
read -p    "Pilih Nomor :" bro 

if [ $bro = 1 ] || [ $bro = 1 ]
then
clear
echo "connect to bot" | lolcat 
sleep 1
echo "bot connected!" | lolcat
python3 main.py
fi

if [ $bro = 2 ] || [ $bro = 2 ]
then
clear
echo "waiting update" | lolcat
sleep 2
git pull
fi
