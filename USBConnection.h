#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>

using namespace std;

class USBConnection{
private:
    int ID;
    static stack<int> ids;
    USBConnection();
public:
    static USBConnection* CreateUsbConnection(){
        USBConnection* usb1 = new USBConnection();
        return usb1;
    }
    int get_id(){
        return ID;
    };
    ~USBConnection();
};

USBConnection::USBConnection(){
    int newID = 0;
    if (ids.size() == 0){
        
    }
    
    ids.push(1);
}

USBConnection::~USBConnection(){
}


#endif