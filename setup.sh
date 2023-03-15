#!/bin/bash
ungu='\033[0;35m'

clear
sleep 1
echo "==================================================" | lolcat
figlet -f script "CyberCHAT" | lolcat
echo "==================================================" | lolcat
date | lolcat
echo "__________________________________________________" | lolcat
echo "                 script by: A7i" | lolcat
echo "                  V.2.1 LTS" | lolcat
echo "__________________________________________________" | lolcat
echo
echo "==================================================" | lolcat
echo "                      menu" | lolcat
echo "1.start bot telegram" | lolcat
echo "2.start bot whatsapp" | lolcat
echo "3.update bot" | lolcat
echo "4.fix update" | lolcat
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

if [ $bro = 3 ] || [ $bro = 3 ]
then
clear
echo "waiting update" | lolcat
sleep 2
git pull && bash setup.sh
fi

if [ $bro = 4 ] || [ $bro = 4 ]
then
clear
echo "fix update" | lolcat
sleep 2
git stash && git merge && bash setup.sh
fi

if [ $bro = 2 ] || [ $bro = 2 ]
then
clear
echo "starting bot whatsapp" | lolcat
sleep1 
node index.js
fi
