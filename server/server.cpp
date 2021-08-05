#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "httplib.h"
#include <iostream>
using namespace std;
using namespace httplib;

int main(void)
{
    int port = 9999;
    cout << "start server: " << port << endl;
    // HTTP
    Server svr;
    
    // HTTPS
    //    SSLServer svr;
    svr.Get("/hi", [](const httplib::Request &, httplib::Response &res) {
        res.set_content("Hello World!", "text/plain");
    });
    
    svr.listen("0.0.0.0", port);
    
}
