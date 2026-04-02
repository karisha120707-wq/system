encrypt.o: encrypt.c encrypt.h msg_hider.c 
	gcc -c encrypt.c

msg_hider.o: msg_hider.c
	gcc -c msg_hider.c 

encrypt: encrypt.o msg_hider.o 
	gcc encrypt.o msg_hider.o -o encrypt