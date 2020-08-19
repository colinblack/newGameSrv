#ifndef _TCP_SERVER1_H_
#define _TCP_SERVER1_H_

#include <tuple>
#include <memory>
#include <map>
#include "Listener.h"
#include "Connect.h"
#include <string>
#include "Socket.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <functional>
#include <memory>
#include "InetAddr.h"
#include "Buffer.h"
#include  "CallBacks.h"

using namespace std::placeholders;

namespace flynet{
namespace net{

class EventLoop;

template <class Buffer>
class TcpServer1
{
public:
    TcpServer1(EventLoop* loop)
        : loop_(loop)
        , conId_(1)
    {
    //    messageCallback_ =  std::bind(&TcpServer1::DefaultMessage, this); 
    }
    ~TcpServer1(){
    }

public:
    void Start(InetAddr& addr);
    EventLoop* GetLoop();
    void SetMessageCallback(const MessageCallback& cb);
    bool DefaultMessage(); //默认消息处理函数

private:
    MessageCallback messageCallback_;
    void NewConnection(int32_t fd, InetAddr & addr);

private:
    using ConnectMap = std::map<std::string, std::shared_ptr<Connect>>;
    std::shared_ptr<Listener> listener_;
    ConnectMap connsMap_; 
    EventLoop* loop_;
    int64_t conId_;
};


template <class Buffer>
void TcpServer1<Buffer>::Start(InetAddr& addr)
{
    listener_ = std::make_shared<Listener>(loop_, addr.port_, addr.ip_);
    listener_->GoListener();
    listener_->SetConnectCallback(std::bind(&TcpServer1::NewConnection, this, _1, _2));
}

template <class Buffer>
void TcpServer1<Buffer>::SetMessageCallback(const MessageCallback& cb){
    messageCallback_ = cb;
}

template <class Buffer>
void TcpServer1<Buffer>::NewConnection(int32_t fd, InetAddr & addr)
{
    std::shared_ptr<Connect> con(new Connect(loop_, fd, addr, std::shared_ptr<Buffer>(new Buffer)));
    con->ConnectEstabished();
    con->SetMessageCallback(messageCallback_);
    char buf[64];
    snprintf(buf, sizeof buf, "%ld", conId_);
    std::string strId(buf);
    connsMap_[strId] = con;
} 

}

}


#endif /* _TCP_SERVER1_H_ */
