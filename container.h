// headers' structures

// IP header's structure

struct ipheader {

 unsigned char      iph_ihl:5, /* Little-endian */

                    iph_ver:4;

 unsigned char      iph_tos;

 unsigned short int iph_len;

 unsigned short int iph_ident;

 unsigned char      iph_flags;

 unsigned short int iph_offset;

 unsigned char      iph_ttl;

 unsigned char      iph_protocol;

 unsigned short int iph_chksum;

 unsigned int       iph_sourceip;

 unsigned int       iph_destip;

};

 

/* Structure of a TCP header */

struct tcpheader {

 unsigned short int tcph_srcport;

 unsigned short int tcph_destport;

 unsigned int       tcph_seqnum;

 unsigned int       tcph_acknum;

 unsigned char      tcph_reserved:4, tcph_offset:4;

 // unsigned char tcph_flags;

  unsigned int

       tcp_res1:4,      /*little-endian*/

       tcph_hlen:4,     /*length of tcp header in 32-bit words*/

       tcph_fin:1,      /*Finish flag "fin"*/

       tcph_syn:1,       /*Synchronize sequence numbers to start a connection*/

       tcph_rst:1,      /*Reset flag */

       tcph_psh:1,      /*Push, sends data to the application*/

       tcph_ack:1,      /*acknowledge*/

       tcph_urg:1,      /*urgent pointer*/

       tcph_res2:2;

 unsigned short int tcph_win;

 unsigned short int tcph_chksum;

 unsigned short int tcph_urgptr;

};
