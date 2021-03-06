#ifndef SLICE_HACK_NETWORK_CLIENTMANAGERINTERFACE_H_
#define SLICE_HACK_NETWORK_CLIENTMANAGERINTERFACE_H_

namespace slice_hack {
namespace network {

class Client;

class ClientManagerInterface {
 public:
  enum HandleData {
    kOk = 0,
    kIncomplete = 1,
    kInvalid = 2
  };

  virtual ~ClientManagerInterface() {}

  virtual void AddClient(Client *client) = 0;
  virtual HandleData HandleBuffer(Client *client) = 0;
  virtual void RemoveClient(Client *client) = 0;

 protected:
  ClientManagerInterface() {}
};

}  // namespace network
}  // namespace slice_hack

#endif  // SLICE_HACK_NETWORK_CLIENTMANAGERINTERFACE_H_
