#include <iostream>
#include <string>

#include "zhelpers.hpp"

using namespace std;

int main(int argc, char** argv)
{
    zmq::context_t context(1);
    zmq::socket_t socket(context, ZMQ_REQ);
    socket.connect("tcp://localhost:5555");
    std::cout << "Connecting to Server..." << std::endl;
    while (true) {
        s_send(socket, "test");
        std::string measure_result = s_recv(socket);
        std::cout << "Receive Result is " << measure_result << std::endl;
        Sleep(100);
    }
    return 0;
}
