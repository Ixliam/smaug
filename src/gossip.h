#define GOSSIP_CLIENT_ID getenv( "ID" ) // YOUR CLIENT ID 
#define GOSSIP_CLIENT_SECRET getenv( "SECRET" ) // YOUR CLIENT SECRET

int gossip_onclose( wsclient *c );
int gossip_onerror( wsclient *c, wsclient_error *err );
int gossip_onmessage( wsclient *c, wsclient_message *msg );
int gossip_onopen( wsclient *c );

extern void libwsclient_onclose(wsclient *client, int (*cb)(wsclient *c));
extern void libwsclient_onopen(wsclient *client, int (*cb)(wsclient *c));
extern void libwsclient_onmessage(wsclient *client, int (*cb)(wsclient *c, wsclient_message *msg));
extern void libwsclient_onerror(wsclient *client, int (*cb)(wsclient *c, wsclient_error *err));
extern int libwsclient_send(wsclient *client, char *strdata);

/*
 * Globals
 */
extern wsclient *gossip_ws;