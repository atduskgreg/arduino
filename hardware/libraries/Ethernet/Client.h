#ifndef Client_h
#define Client_h

#include "Print.h"

class Client : public Print {
private:
  uint8_t _sock;
  uint8_t *_ip;
  uint16_t _port;
public:
  Client(uint8_t);
  Client(uint8_t *, uint16_t);
  uint8_t status();
  uint8_t connect();
  virtual void write(uint8_t);
  int available();
  int read();
  void flush();
  void stop();
  uint8_t connected();
  uint8_t operator==(int);
  uint8_t operator!=(int);
  operator bool();
  friend class Server;
};

#endif
