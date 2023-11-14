#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    int num = 0;
    std::string screen;
    if (macAddress[0] == 'F' and macAddress[1] == 'F' ){
        screen =  "Broadcast";
    }else {
        num = (macAddress[1] - '0');
        if(num > 9) num ++;
        if (num % 2 == 0) {
            screen = "Unicast";
        } else {
            screen = "Multicast";
        }
    }
    return screen;
    }
    // make use of control flow statements
    // return result;
}
