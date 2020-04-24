#include <iostream>
#include <winsock2.h>
#include <string.h>
#pragma comment (lib,"ws2_32.lib")

const short localport = 9000;

int main(){
    int hostSocket = socket(AF_INET, SOCK_STREAM, 0);
    if(hostSocket==-1)
    {
        std::cout << "Socket create failed";
        return 1;
    }
    sockaddr_in localaddr;
    localaddr.sin_family = AF_INET;
    localaddr.sin_port = htons(localport);
    localaddr.sin_addr.s_addr = INADDR_ANY;
    memset(&(localaddr.sin_zero), 0, sizeof(localaddr.sin_zero));
    if (bind(hostSocket, (struct sockaddr *)&localaddr, sizeof(struct sockaddr))!=0)
    {
        std::cout << "Socket bind failed";
        return 1;
    }
    system("pause");
    return 0;
}