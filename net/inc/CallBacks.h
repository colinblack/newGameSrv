#ifndef _CALL_BACKS_H_
#define _CALL_BACKS_H_

#include  <functional>
#include <memory>


namespace flynet{
    namespace net{
            class TimerTask;
                class Connect;
                class Buffer;


            using  TimerTaskCallBack  = std::function<void()>;
            using  MessageCallback = std::function<bool(const std::shared_ptr<Connect>&, std::shared_ptr<void> )>;
            using  TimerEv = TimerTask *;

    }
}


#endif /*_CALL_BACKS_H_ */
