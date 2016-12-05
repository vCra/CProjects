
//
// client.cpp
// ~~~~~~~~~~
//

//localhost = 127.0.0.1

#include <iostream>
#include <boost/array.hpp>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

#define LAMBPORT "40000"

int main(int argc, char* argv[]) {
    
    std::cout << "Read Lamb Poem: where is server?:";
    std::string server_name;
    std::cin >> server_name;

    std::cout << "Trying to find " << server_name << std::endl ;

    try {
        boost::asio::io_service io_service;

        tcp::resolver resolver(io_service);

        tcp::resolver::query query(server_name, LAMBPORT);
        tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);

        tcp::socket socket(io_service);
        boost::asio::connect(socket, endpoint_iterator);
        
        //boost::system::error_code ignored_error;
        //boost::asio::write(socket, boost::asio::buffer("hello"), ignored_error);

       for (;;) {
            boost::array<char, 128> buf;
            boost::system::error_code error;

            size_t len = socket.read_some(boost::asio::buffer(buf), error);

            if (error == boost::asio::error::eof) {
                std::cout << "end of message"<<std::endl;
                break; // Connection closed cleanly by peer.
            } else if (error)
                throw boost::system::system_error(error); // Some other error.

            std::cout.write(buf.data(), len);
            std::cout <<std::endl;
      }
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "EXIT lamb Client ";

    return 0;
}