#!/bin/bash
bash banner.sh
ungu='\033[0;35m'
echo "====================================================" | lolcat
date | lolcat
echo "____________________________________________________" | lolcat
echo "                 script by: A7i" | lolcat
echo "                  V.2.1 LTS" | lolcat
echo "___________________________________________________" | lolcat
echo "===================================================" | lolcat
echo "                      menu" | lolcat
echo "1.start bot telegram" | lolcat
echo "2.start bot whatsapp" | lolcat
echo "3.update bot" | lolcat
echo "4.fix update" | lolcat
echo -e "${ungu}"
echo "___________________________________________________" | lolcat
echo "Client Name: AZI GANTENG"
echo "Region : Indonesia" 
echo "Status : Pemilik Script"
echo "my love : deby"
echo "___________________________________________________" | lolcat
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
rm -f setup.sh && bash update && bash setup.sh
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
