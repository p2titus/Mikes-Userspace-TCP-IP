#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <linux/if_ether.h>

/*
 * using raw socket on particular port
 * essentially, this class is a bit of a hack to get the traffic so we can do
 * lvl 2 (datalink) stuff and so forth
*/


int read_in(int s_raw) {
	return 0;
}

int physical() {
	// inefficiencies abound atm
	const int s = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL));
	if(s < 0) {
		perror("error creating socket");
		exit(-1);
	}
	else {
		void* x = read_in(s);
		close(s);
		return x;
	}
}

