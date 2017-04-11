// Generated by gencpp from file r_chatbot/FaceTrain.msg
// DO NOT EDIT!


#ifndef R_CHATBOT_MESSAGE_FACETRAIN_H
#define R_CHATBOT_MESSAGE_FACETRAIN_H

#include <ros/service_traits.h>


#include <r_chatbot/FaceTrainRequest.h>
#include <r_chatbot/FaceTrainResponse.h>


namespace r_chatbot
{

struct FaceTrain
{

typedef FaceTrainRequest Request;
typedef FaceTrainResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FaceTrain
} // namespace r_chatbot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::r_chatbot::FaceTrain > {
  static const char* value()
  {
    return "b390e99f3af36e07f2b7d5e1bf39f6f2";
  }

  static const char* value(const ::r_chatbot::FaceTrain&) { return value(); }
};

template<>
struct DataType< ::r_chatbot::FaceTrain > {
  static const char* value()
  {
    return "r_chatbot/FaceTrain";
  }

  static const char* value(const ::r_chatbot::FaceTrain&) { return value(); }
};


// service_traits::MD5Sum< ::r_chatbot::FaceTrainRequest> should match 
// service_traits::MD5Sum< ::r_chatbot::FaceTrain > 
template<>
struct MD5Sum< ::r_chatbot::FaceTrainRequest>
{
  static const char* value()
  {
    return MD5Sum< ::r_chatbot::FaceTrain >::value();
  }
  static const char* value(const ::r_chatbot::FaceTrainRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::r_chatbot::FaceTrainRequest> should match 
// service_traits::DataType< ::r_chatbot::FaceTrain > 
template<>
struct DataType< ::r_chatbot::FaceTrainRequest>
{
  static const char* value()
  {
    return DataType< ::r_chatbot::FaceTrain >::value();
  }
  static const char* value(const ::r_chatbot::FaceTrainRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::r_chatbot::FaceTrainResponse> should match 
// service_traits::MD5Sum< ::r_chatbot::FaceTrain > 
template<>
struct MD5Sum< ::r_chatbot::FaceTrainResponse>
{
  static const char* value()
  {
    return MD5Sum< ::r_chatbot::FaceTrain >::value();
  }
  static const char* value(const ::r_chatbot::FaceTrainResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::r_chatbot::FaceTrainResponse> should match 
// service_traits::DataType< ::r_chatbot::FaceTrain > 
template<>
struct DataType< ::r_chatbot::FaceTrainResponse>
{
  static const char* value()
  {
    return DataType< ::r_chatbot::FaceTrain >::value();
  }
  static const char* value(const ::r_chatbot::FaceTrainResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // R_CHATBOT_MESSAGE_FACETRAIN_H
