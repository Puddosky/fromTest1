//#ifdef __linux__
#include <sys/socket.h>
#include <stdio.h>
#include <cstring>

void menu(){
    std::cout<<"Digit a number and press ENTER to choose the option"<<std::endl;
    std::cout<<"1. Show all the Votes"<<std::endl;
    std::cout<<"2. Add a new Vote"<<std::endl;
    std::cout<<"3. Show all the Votes of a student"<<std::endl;
    std::cout<<"0. Exit the Program"<<std::endl;
    std::cout<<std::endl;
    return;
}

bool valuateOptions(){
    String q;
    std::cin >> q;
    try {
        int i = std::stoi(q);
    } catch (std::exception const & e) {
        std::cout<< 
    }
}

void serverCommunication(int clientSocket){
    bool end = false;
    while(!end){
        menu();
        end = valuateOptions();
    }
    return;
}

int main(){
    int clientSocket = socket(AF_INTE,SOCK_STREAM,0);
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(4721);
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));
    serverCommunication(clientSocket);
    close(clientSocket);
    return 1;
}
//#endif