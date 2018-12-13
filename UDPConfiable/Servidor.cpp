#include "SocketDatagrama.h"
#include "Mensaje.h"
#include "Respuesta.h"
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>

int main(int argc, char*argv[])
{
    int nbd = 0;
    string nbdS = " ";
    Respuesta respuesta(7200);
    struct mensaje *msg;
    int idrequestLast = -1;
    int idrequest = -1;
    
    while(true) {
        msg = respuesta.getRequest();
        idrequest = msg->requestId ;
        nbdS = to_string(nbd);
        respuesta.sendReply((char *)nbdS.c_str(), msg->IP, msg->puerto);    
    }
}
