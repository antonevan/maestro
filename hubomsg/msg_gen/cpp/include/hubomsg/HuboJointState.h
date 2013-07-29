/* Auto-generated by genmsg_cpp for file /opt/ros/fuerte/stacks/maestro/hubomsg/msg/HuboJointState.msg */
#ifndef HUBOMSG_MESSAGE_HUBOJOINTSTATE_H
#define HUBOMSG_MESSAGE_HUBOJOINTSTATE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace hubomsg
{
template <class ContainerAllocator>
struct HuboJointState_ {
  typedef HuboJointState_<ContainerAllocator> Type;

  HuboJointState_()
  : name()
  , commanded(0.0)
  , position(0.0)
  , velocity(0.0)
  , current(0.0)
  , temperature(0.0)
  , active(0)
  , zeroed(0)
  , homed(0)
  , status(0)
  {
  }

  HuboJointState_(const ContainerAllocator& _alloc)
  : name(_alloc)
  , commanded(0.0)
  , position(0.0)
  , velocity(0.0)
  , current(0.0)
  , temperature(0.0)
  , active(0)
  , zeroed(0)
  , homed(0)
  , status(0)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  name;

  typedef double _commanded_type;
  double commanded;

  typedef double _position_type;
  double position;

  typedef double _velocity_type;
  double velocity;

  typedef double _current_type;
  double current;

  typedef double _temperature_type;
  double temperature;

  typedef int32_t _active_type;
  int32_t active;

  typedef int32_t _zeroed_type;
  int32_t zeroed;

  typedef int32_t _homed_type;
  int32_t homed;

  typedef int32_t _status_type;
  int32_t status;


  typedef boost::shared_ptr< ::hubomsg::HuboJointState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hubomsg::HuboJointState_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct HuboJointState
typedef  ::hubomsg::HuboJointState_<std::allocator<void> > HuboJointState;

typedef boost::shared_ptr< ::hubomsg::HuboJointState> HuboJointStatePtr;
typedef boost::shared_ptr< ::hubomsg::HuboJointState const> HuboJointStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hubomsg::HuboJointState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hubomsg::HuboJointState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hubomsg

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hubomsg::HuboJointState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hubomsg::HuboJointState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hubomsg::HuboJointState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cd4920501e6f3788c47ef788b494b94e";
  }

  static const char* value(const  ::hubomsg::HuboJointState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xcd4920501e6f3788ULL;
  static const uint64_t static_value2 = 0xc47ef788b494b94eULL;
};

template<class ContainerAllocator>
struct DataType< ::hubomsg::HuboJointState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hubomsg/HuboJointState";
  }

  static const char* value(const  ::hubomsg::HuboJointState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hubomsg::HuboJointState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string name\n\
float64 commanded\n\
float64 position\n\
float64 velocity\n\
float64 current\n\
float64 temperature\n\
int32 active\n\
int32 zeroed\n\
int32 homed\n\
int32 status\n\
";
  }

  static const char* value(const  ::hubomsg::HuboJointState_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hubomsg::HuboJointState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.name);
    stream.next(m.commanded);
    stream.next(m.position);
    stream.next(m.velocity);
    stream.next(m.current);
    stream.next(m.temperature);
    stream.next(m.active);
    stream.next(m.zeroed);
    stream.next(m.homed);
    stream.next(m.status);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct HuboJointState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hubomsg::HuboJointState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hubomsg::HuboJointState_<ContainerAllocator> & v) 
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "commanded: ";
    Printer<double>::stream(s, indent + "  ", v.commanded);
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
    s << indent << "current: ";
    Printer<double>::stream(s, indent + "  ", v.current);
    s << indent << "temperature: ";
    Printer<double>::stream(s, indent + "  ", v.temperature);
    s << indent << "active: ";
    Printer<int32_t>::stream(s, indent + "  ", v.active);
    s << indent << "zeroed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.zeroed);
    s << indent << "homed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.homed);
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
  }
};


} // namespace message_operations
} // namespace ros

#endif // HUBOMSG_MESSAGE_HUBOJOINTSTATE_H

