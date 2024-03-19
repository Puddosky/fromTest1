#ifdef __linux__
#include <sys/socket.h>

int main(){
    int clientSocket = socket(AF_INTE,SOCK_STREAM,0);
    sockaddr_in serverAddress;
    serverAddress.sin_family = htons();
    return 1;
}
#endif