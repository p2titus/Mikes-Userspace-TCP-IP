#include<sys/socket.h>

/*
 * using raw socket on particular port
 * essentially, this class is a bit of a hack to get the traffic so we can do
 * lvl 2 (datalink) stuff and so forth
*/


int get_raw(int sock_protocol) {
	// inefficiencies abound atm
	Socket sd = socket(PF_INET, SOCK_RAW, htons(ETH_P_ALL));
	if(sd < 0) {
		perror("error creating socket");
		exit(-1);
	}
	else {
		return read_in(&sd);
	}
}

int read_id(Socket *raw_s) {
	
}


