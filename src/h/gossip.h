#define GOSSIP_CLIENT_ID getenv( "b429a8a2-60e5-4182-b4d8-c496278347ad" ) // YOUR CLIENT ID 
#define GOSSIP_CLIENT_SECRET getenv( "e99b092f-b28e-4c5e-bd16-7810896c81da" ) // YOUR CLIENT SECRET

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