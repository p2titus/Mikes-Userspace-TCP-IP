//#include<syshead.h>
//#include<utils.h>
#include<basic.h>

// using Linux TAP for intercepting low level traffic
// essentially, this class is a bit of a hack to get the traffic so we can do
// lvl 2 (datalink) stuff and so forth

int tun_alloc(char* dev) {
	struct ifreq ifr;
	int fd, err;
	return 0;
}


