#include <iostream>
#include <string>

#include "zhelpers.hpp"

using namespace std;


int main(int argc, char** argv)
{
    zmq::context_t context(1);
    zmq::socket_t socket(context, ZMQ_REP);
    socket.bind("tcp://*:5555");
    long double result = 2.553;
    while (true) {
        std::string recv_msg = s_recv(socket);
        std::cout << "Receive Signal, Start Measure..." << std::endl;
        Sleep(100);
        result += 0.1;
        std::string measure_result("{\"value\": [");
        measure_result = measure_result + to_string(result) + "]}";
        s_send(socket, measure_result);
    }

    return 0;
}

