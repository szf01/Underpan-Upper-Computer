// Generated by gencpp from file mavros_msgs/SpeedControlStatus.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_SPEEDCONTROLSTATUS_H
#define MAVROS_MSGS_MESSAGE_SPEEDCONTROLSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct SpeedControlStatus_
{
  typedef SpeedControlStatus_<ContainerAllocator> Type;

  SpeedControlStatus_()
    : vx_state(0.0)
    , vy_state(0.0)
    , vw_state(0.0)
    , header()  {
    }
  SpeedControlStatus_(const ContainerAllocator& _alloc)
    : vx_state(0.0)
    , vy_state(0.0)
    , vw_state(0.0)
    , header(_alloc)  {
  (void)_alloc;
    }



   typedef float _vx_state_type;
  _vx_state_type vx_state;

   typedef float _vy_state_type;
  _vy_state_type vy_state;

   typedef float _vw_state_type;
  _vw_state_type vw_state;

   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;





  typedef boost::shared_ptr< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> const> ConstPtr;

}; // struct SpeedControlStatus_

typedef ::mavros_msgs::SpeedControlStatus_<std::allocator<void> > SpeedControlStatus;

typedef boost::shared_ptr< ::mavros_msgs::SpeedControlStatus > SpeedControlStatusPtr;
typedef boost::shared_ptr< ::mavros_msgs::SpeedControlStatus const> SpeedControlStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::SpeedControlStatus_<ContainerAllocator1> & lhs, const ::mavros_msgs::SpeedControlStatus_<ContainerAllocator2> & rhs)
{
  return lhs.vx_state == rhs.vx_state &&
    lhs.vy_state == rhs.vy_state &&
    lhs.vw_state == rhs.vw_state &&
    lhs.header == rhs.header;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::SpeedControlStatus_<ContainerAllocator1> & lhs, const ::mavros_msgs::SpeedControlStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "345bbbfcdfc76f6def5475842d240947";
  }

  static const char* value(const ::mavros_msgs::SpeedControlStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x345bbbfcdfc76f6dULL;
  static const uint64_t static_value2 = 0xef5475842d240947ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/SpeedControlStatus";
  }

  static const char* value(const ::mavros_msgs::SpeedControlStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 vx_state\n"
"float32 vy_state\n"
"float32 vw_state\n"
"\n"
"\n"
"std_msgs/Header header\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mavros_msgs::SpeedControlStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.vx_state);
      stream.next(m.vy_state);
      stream.next(m.vw_state);
      stream.next(m.header);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SpeedControlStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::SpeedControlStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::SpeedControlStatus_<ContainerAllocator>& v)
  {
    s << indent << "vx_state: ";
    Printer<float>::stream(s, indent + "  ", v.vx_state);
    s << indent << "vy_state: ";
    Printer<float>::stream(s, indent + "  ", v.vy_state);
    s << indent << "vw_state: ";
    Printer<float>::stream(s, indent + "  ", v.vw_state);
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_SPEEDCONTROLSTATUS_H
