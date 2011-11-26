#ifndef SCREEN_RECIEVER_HPP_INCLUDED
#define SCREEN_RECIEVER_HPP_INCLUDED

#include <boost/shared_ptr.hpp>

#include "imageManager.hpp"
//#include <CImg.h>
#include "screenDumper.hpp"
#include "messageQueue.hpp"

class ScreenReciever
{
public:
   static boost::shared_ptr<ScreenReciever> create();
   virtual void setMessageQueue(boost::shared_ptr<MessageQueue> ) = 0;

   virtual void setImageManager(boost::shared_ptr<ImageManager> manager) = 0;
   virtual void processScreen( boost::shared_ptr<ImageType> ) = 0;
   virtual void setSize(int width, int height) = 0;
   virtual void setScreenDumper(boost::shared_ptr<ScreenDumper> ) = 0;
   virtual void setScreenDumperQueue(boost::shared_ptr<MessageQueue>) = 0;
   virtual void stopProcess() = 0;

protected:
   ~ScreenReciever()
   {}
};

#endif
