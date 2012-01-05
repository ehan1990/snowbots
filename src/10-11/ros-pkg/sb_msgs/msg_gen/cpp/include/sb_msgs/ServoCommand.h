/* Auto-generated by genmsg_cpp for file /home/nwadams/sb/10-11/ros-pkg/sb_msgs/msg/ServoCommand.msg */
#ifndef SB_MSGS_MESSAGE_SERVOCOMMAND_H
#define SB_MSGS_MESSAGE_SERVOCOMMAND_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"


namespace sb_msgs
{
template <class ContainerAllocator>
struct ServoCommand_ : public ros::Message
{
  typedef ServoCommand_<ContainerAllocator> Type;

  ServoCommand_()
  : id(0)
  , pwm(0)
  , throttle(0)
  , steering(0)
  , pan(0)
  , tilt(0)
  , usingServo(false)
  {
  }

  ServoCommand_(const ContainerAllocator& _alloc)
  : id(0)
  , pwm(0)
  , throttle(0)
  , steering(0)
  , pan(0)
  , tilt(0)
  , usingServo(false)
  {
  }

  typedef int32_t _id_type;
  int32_t id;

  typedef int32_t _pwm_type;
  int32_t pwm;

  typedef int32_t _throttle_type;
  int32_t throttle;

  typedef int32_t _steering_type;
  int32_t steering;

  typedef int32_t _pan_type;
  int32_t pan;

  typedef int32_t _tilt_type;
  int32_t tilt;

  typedef uint8_t _usingServo_type;
  uint8_t usingServo;


private:
  static const char* __s_getDataType_() { return "sb_msgs/ServoCommand"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "0638299d4e64a023ad0af9c6a2fd2ef2"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# A servo command that the furiousDriver.py node can understand.\n\
\n\
int32 id  # The integer id of the servo\n\
int32 pwm # The raw servo value\n\
\n\
int32 throttle\n\
int32 steering\n\
int32 pan\n\
int32 tilt\n\
\n\
bool usingServo\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, id);
    ros::serialization::serialize(stream, pwm);
    ros::serialization::serialize(stream, throttle);
    ros::serialization::serialize(stream, steering);
    ros::serialization::serialize(stream, pan);
    ros::serialization::serialize(stream, tilt);
    ros::serialization::serialize(stream, usingServo);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, id);
    ros::serialization::deserialize(stream, pwm);
    ros::serialization::deserialize(stream, throttle);
    ros::serialization::deserialize(stream, steering);
    ros::serialization::deserialize(stream, pan);
    ros::serialization::deserialize(stream, tilt);
    ros::serialization::deserialize(stream, usingServo);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(id);
    size += ros::serialization::serializationLength(pwm);
    size += ros::serialization::serializationLength(throttle);
    size += ros::serialization::serializationLength(steering);
    size += ros::serialization::serializationLength(pan);
    size += ros::serialization::serializationLength(tilt);
    size += ros::serialization::serializationLength(usingServo);
    return size;
  }

  typedef boost::shared_ptr< ::sb_msgs::ServoCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sb_msgs::ServoCommand_<ContainerAllocator>  const> ConstPtr;
}; // struct ServoCommand
typedef  ::sb_msgs::ServoCommand_<std::allocator<void> > ServoCommand;

typedef boost::shared_ptr< ::sb_msgs::ServoCommand> ServoCommandPtr;
typedef boost::shared_ptr< ::sb_msgs::ServoCommand const> ServoCommandConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::sb_msgs::ServoCommand_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::sb_msgs::ServoCommand_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace sb_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::sb_msgs::ServoCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0638299d4e64a023ad0af9c6a2fd2ef2";
  }

  static const char* value(const  ::sb_msgs::ServoCommand_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0638299d4e64a023ULL;
  static const uint64_t static_value2 = 0xad0af9c6a2fd2ef2ULL;
};

template<class ContainerAllocator>
struct DataType< ::sb_msgs::ServoCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sb_msgs/ServoCommand";
  }

  static const char* value(const  ::sb_msgs::ServoCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::sb_msgs::ServoCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# A servo command that the furiousDriver.py node can understand.\n\
\n\
int32 id  # The integer id of the servo\n\
int32 pwm # The raw servo value\n\
\n\
int32 throttle\n\
int32 steering\n\
int32 pan\n\
int32 tilt\n\
\n\
bool usingServo\n\
\n\
";
  }

  static const char* value(const  ::sb_msgs::ServoCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::sb_msgs::ServoCommand_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::sb_msgs::ServoCommand_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id);
    stream.next(m.pwm);
    stream.next(m.throttle);
    stream.next(m.steering);
    stream.next(m.pan);
    stream.next(m.tilt);
    stream.next(m.usingServo);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ServoCommand_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sb_msgs::ServoCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::sb_msgs::ServoCommand_<ContainerAllocator> & v) 
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "pwm: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pwm);
    s << indent << "throttle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.throttle);
    s << indent << "steering: ";
    Printer<int32_t>::stream(s, indent + "  ", v.steering);
    s << indent << "pan: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pan);
    s << indent << "tilt: ";
    Printer<int32_t>::stream(s, indent + "  ", v.tilt);
    s << indent << "usingServo: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.usingServo);
  }
};


} // namespace message_operations
} // namespace ros

#endif // SB_MSGS_MESSAGE_SERVOCOMMAND_H
