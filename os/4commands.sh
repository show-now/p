echo -e "1. Hostname \n2. System info \n3. Current logged in user \n4. List contents of directory \n5. Print Working Directory \n6. Disk Usage \n7. memory usage \n8. Running Proccess \n9. Uptime of the system \n10. Date "

read -p "Enter the choice: " choice

case $choice in
	1) hostname;;
	2) uname -a;;
	3) whoami;;
	4) ls;;
	5) pwd;;
	6) df;;
	7) free;;
	8) top;;
	9) uptime;;
	10) date;;
esac
