// Generated by gencpp from file chatbot/Context.msg
// DO NOT EDIT!


#ifndef CHATBOT_MESSAGE_CONTEXT_H
#define CHATBOT_MESSAGE_CONTEXT_H

#include <ros/service_traits.h>


#include <chatbot/ContextRequest.h>
#include <chatbot/ContextResponse.h>


namespace chatbot
{

struct Context
{

typedef ContextRequest Request;
typedef ContextResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Context
} // namespace chatbot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::chatbot::Context > {
  static const char* value()
  {
    return "d4d3081274ba465e7c9b07013f8d6793";
  }

  static const char* value(const ::chatbot::Context&) { return value(); }
};

template<>
struct DataType< ::chatbot::Context > {
  static const char* value()
  {
    return "chatbot/Context";
  }

  static const char* value(const ::chatbot::Context&) { return value(); }
};


// service_traits::MD5Sum< ::chatbot::ContextRequest> should match 
// service_traits::MD5Sum< ::chatbot::Context > 
template<>
struct MD5Sum< ::chatbot::ContextRequest>
{
  static const char* value()
  {
    return MD5Sum< ::chatbot::Context >::value();
  }
  static const char* value(const ::chatbot::ContextRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::chatbot::ContextRequest> should match 
// service_traits::DataType< ::chatbot::Context > 
template<>
struct DataType< ::chatbot::ContextRequest>
{
  static const char* value()
  {
    return DataType< ::chatbot::Context >::value();
  }
  static const char* value(const ::chatbot::ContextRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::chatbot::ContextResponse> should match 
// service_traits::MD5Sum< ::chatbot::Context > 
template<>
struct MD5Sum< ::chatbot::ContextResponse>
{
  static const char* value()
  {
    return MD5Sum< ::chatbot::Context >::value();
  }
  static const char* value(const ::chatbot::ContextResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::chatbot::ContextResponse> should match 
// service_traits::DataType< ::chatbot::Context > 
template<>
struct DataType< ::chatbot::ContextResponse>
{
  static const char* value()
  {
    return DataType< ::chatbot::Context >::value();
  }
  static const char* value(const ::chatbot::ContextResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CHATBOT_MESSAGE_CONTEXT_H
