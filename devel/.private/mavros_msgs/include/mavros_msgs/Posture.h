// Generated by gencpp from file mavros_msgs/Posture.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_POSTURE_H
#define MAVROS_MSGS_MESSAGE_POSTURE_H


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
struct Posture_
{
  typedef Posture_<ContainerAllocator> Type;

  Posture_()
    : pos_x_state(0.0)
    , pos_y_state(0.0)
    , zangle_state(0.0)
    , xangle_state(0.0)
    , yangle_state(0.0)
    , w_z_state(0.0)
    , header()  {
    }
  Posture_(const ContainerAllocator& _alloc)
    : pos_x_state(0.0)
    , pos_y_state(0.0)
    , zangle_state(0.0)
    , xangle_state(0.0)
    , yangle_state(0.0)
    , w_z_state(0.0)
    , header(_alloc)  {
  (void)_alloc;
    }



   typedef float _pos_x_state_type;
  _pos_x_state_type pos_x_state;

   typedef float _pos_y_state_type;
  _pos_y_state_type pos_y_state;

   typedef float _zangle_state_type;
  _zangle_state_type zangle_state;

   typedef float _xangle_state_type;
  _xangle_state_type xangle_state;

   typedef float _yangle_state_type;
  _yangle_state_type yangle_state;

   typedef float _w_z_state_type;
  _w_z_state_type w_z_state;

   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;





  typedef boost::shared_ptr< ::mavros_msgs::Posture_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::Posture_<ContainerAllocator> const> ConstPtr;

}; // struct Posture_

typedef ::mavros_msgs::Posture_<std::allocator<void> > Posture;

typedef boost::shared_ptr< ::mavros_msgs::Posture > PosturePtr;
typedef boost::shared_ptr< ::mavros_msgs::Posture const> PostureConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::Posture_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::Posture_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::Posture_<ContainerAllocator1> & lhs, const ::mavros_msgs::Posture_<ContainerAllocator2> & rhs)
{
  return lhs.pos_x_state == rhs.pos_x_state &&
    lhs.pos_y_state == rhs.pos_y_state &&
    lhs.zangle_state == rhs.zangle_state &&
    lhs.xangle_state == rhs.xangle_state &&
    lhs.yangle_state == rhs.yangle_state &&
    lhs.w_z_state == rhs.w_z_state &&
    lhs.header == rhs.header;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::Posture_<ContainerAllocator1> & lhs, const ::mavros_msgs::Posture_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::Posture_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::Posture_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::Posture_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::Posture_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::Posture_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::Posture_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::Posture_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9c16718438cf31bb244fa8df603829bf";
  }

  static const char* value(const ::mavros_msgs::Posture_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9c16718438cf31bbULL;
  static const uint64_t static_value2 = 0x244fa8df603829bfULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::Posture_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/Posture";
  }

  static const char* value(const ::mavros_msgs::Posture_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::Posture_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 pos_x_state\n"
"float32 pos_y_state\n"
"float32 zangle_state\n"
"float32 xangle_state\n"
"float32 yangle_state\n"
"float32 w_z_state\n"
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

  static const char* value(const ::mavros_msgs::Posture_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::Posture_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pos_x_state);
      stream.next(m.pos_y_state);
      stream.next(m.zangle_state);
      stream.next(m.xangle_state);
      stream.next(m.yangle_state);
      stream.next(m.w_z_state);
      stream.next(m.header);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Posture_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::Posture_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::Posture_<ContainerAllocator>& v)
  {
    s << indent << "pos_x_state: ";
    Printer<float>::stream(s, indent + "  ", v.pos_x_state);
    s << indent << "pos_y_state: ";
    Printer<float>::stream(s, indent + "  ", v.pos_y_state);
    s << indent << "zangle_state: ";
    Printer<float>::stream(s, indent + "  ", v.zangle_state);
    s << indent << "xangle_state: ";
    Printer<float>::stream(s, indent + "  ", v.xangle_state);
    s << indent << "yangle_state: ";
    Printer<float>::stream(s, indent + "  ", v.yangle_state);
    s << indent << "w_z_state: ";
    Printer<float>::stream(s, indent + "  ", v.w_z_state);
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_POSTURE_H
