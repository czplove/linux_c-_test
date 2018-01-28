#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>

using namespace std;
using namespace boost::asio;

int main(int argc, char* argv[])
{
        io_service iosev;
        // ����COM1, Linux��Ϊ��/dev/ttyS0��
        serial_port sp(iosev, "COM1");
        // ���ò���
        sp.set_option(serial_port::baud_rate(19200));
        sp.set_option(serial_port::flow_control(serial_port::flow_control::none));
        sp.set_option(serial_port::parity(serial_port::parity::none));
        sp.set_option(serial_port::stop_bits(serial_port::stop_bits::one));
        sp.set_option(serial_port::character_size(8));
        // �򴮿�д����
        write(sp, buffer("Hello world", 12));

        // �򴮿ڶ�����
        char buf[100];
        read(sp, buffer(buf));

        iosev.run();
        return 0;
}
