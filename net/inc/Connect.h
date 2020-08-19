#ifndef  _CONNECT_H_
#define  _CONNECT_H_

#include "InetAddr.h"
#include <sys/epoll.h>
#include "Channel.h"
#include  "CallBacks.h"
#include "Buffer.h"

#include <memory>


namespace flynet{
namespace net{
class Connect :   public std::enable_shared_from_this<Connect>
{
public:
    Connect(EventLoop* loop, int32_t fd, InetAddr& addr, std::shared_ptr<void> buffer);
    ~Connect();
    void ReadHandler();
    void WriteHandler();
    void ConnectEstabished();
    void SetMessageCallback(const MessageCallback& cb);
    int32_t GetFd(){
        return fd_;
    }

private:
    int32_t  fd_; 
    static const int32_t buffSize_ = 512;
    InetAddr addr_;
    std::unique_ptr<Channel> channel_;
    //Buffer buffer_;
    std::shared_ptr<void> buffer_; 
    MessageCallback messageCallback_;
    
};

 }

}



#endif /*_CONNECT_H_*/
