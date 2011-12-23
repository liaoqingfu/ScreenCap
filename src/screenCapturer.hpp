#ifndef SCREEN_CAPTURER_HPP_INCLUDED
#define SCREEN_CAPTURER_HPP_INCLUDED

#include <boost/shared_ptr.hpp>
#include "messageQueue.hpp"
#include "screenReciever.hpp"

#include "messageQueueUser.hpp"
#include "configurationManager.hpp"

class ScreenCapturer : public MessageQueueUser<ScreenCapturer>
{
public:
   ScreenCapturer(boost::shared_ptr<MessageQueue> queue) : MessageQueueUser(queue)
   {}

   static boost::shared_ptr<ScreenCapturer> create(boost::shared_ptr<MessageQueue> queue, boost::shared_ptr<ConfigurationManager>);
   virtual void setScreenReciever(boost::shared_ptr<ScreenReciever> reciever) = 0;
   virtual void setImageManager() = 0;
   virtual void captureScreen() = 0;
   virtual void stopCapture() = 0;

protected:
   ~ScreenCapturer()
   {}

};
   

#endif
