// Generated by gencpp from file pedsim_msgs/AgentStates.msg
// DO NOT EDIT!


#ifndef PEDSIM_MSGS_MESSAGE_AGENTSTATES_H
#define PEDSIM_MSGS_MESSAGE_AGENTSTATES_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <pedsim_msgs/AgentState.h>

namespace pedsim_msgs
{
template <class ContainerAllocator>
struct AgentStates_
{
  typedef AgentStates_<ContainerAllocator> Type;

  AgentStates_()
    : header()
    , agent_states()  {
    }
  AgentStates_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , agent_states(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::pedsim_msgs::AgentState_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::pedsim_msgs::AgentState_<ContainerAllocator> >> _agent_states_type;
  _agent_states_type agent_states;





  typedef boost::shared_ptr< ::pedsim_msgs::AgentStates_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pedsim_msgs::AgentStates_<ContainerAllocator> const> ConstPtr;

}; // struct AgentStates_

typedef ::pedsim_msgs::AgentStates_<std::allocator<void> > AgentStates;

typedef boost::shared_ptr< ::pedsim_msgs::AgentStates > AgentStatesPtr;
typedef boost::shared_ptr< ::pedsim_msgs::AgentStates const> AgentStatesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pedsim_msgs::AgentStates_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pedsim_msgs::AgentStates_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pedsim_msgs::AgentStates_<ContainerAllocator1> & lhs, const ::pedsim_msgs::AgentStates_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.agent_states == rhs.agent_states;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pedsim_msgs::AgentStates_<ContainerAllocator1> & lhs, const ::pedsim_msgs::AgentStates_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pedsim_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::AgentStates_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::AgentStates_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::AgentStates_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::AgentStates_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::AgentStates_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::AgentStates_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pedsim_msgs::AgentStates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa81ea94344df8d81e135b65d4d499b1";
  }

  static const char* value(const ::pedsim_msgs::AgentStates_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaa81ea94344df8d8ULL;
  static const uint64_t static_value2 = 0x1e135b65d4d499b1ULL;
};

template<class ContainerAllocator>
struct DataType< ::pedsim_msgs::AgentStates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pedsim_msgs/AgentStates";
  }

  static const char* value(const ::pedsim_msgs::AgentStates_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pedsim_msgs::AgentStates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"pedsim_msgs/AgentState[] agent_states\n"
"\n"
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
"\n"
"================================================================================\n"
"MSG: pedsim_msgs/AgentState\n"
"Header header\n"
"uint64 id\n"
"uint16 type\n"
"string social_state\n"
"geometry_msgs/Pose pose\n"
"geometry_msgs/Twist twist\n"
"pedsim_msgs/AgentForce forces\n"
"\n"
"# Use sensors package to control observability\n"
"\n"
"# Social State string constants\n"
"string      TYPE_STANDING = \"standing\"\n"
"string      TYPE_INDIVIDUAL_MOVING = \"individual_moving\"\n"
"string      TYPE_WAITING_IN_QUEUE = \"waiting_in_queue\"\n"
"string      TYPE_GROUP_MOVING = \"group_moving\"\n"
"\n"
"\n"
"# Agent types\n"
"# 0, 1 -> ordinary agents\n"
"# 2 -> Robot\n"
"# 3 -> standing/elderly agents\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: pedsim_msgs/AgentForce\n"
"# Forces acting on an agent.\n"
"\n"
"# Basic SFM forces.\n"
"geometry_msgs/Vector3 desired_force\n"
"geometry_msgs/Vector3 obstacle_force\n"
"geometry_msgs/Vector3 social_force\n"
"\n"
"# Additional Group Forces\n"
"geometry_msgs/Vector3 group_coherence_force\n"
"geometry_msgs/Vector3 group_gaze_force\n"
"geometry_msgs/Vector3 group_repulsion_force\n"
"\n"
"# Extra stabilization/custom forces.\n"
"geometry_msgs/Vector3 random_force\n"
;
  }

  static const char* value(const ::pedsim_msgs::AgentStates_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pedsim_msgs::AgentStates_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.agent_states);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AgentStates_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pedsim_msgs::AgentStates_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pedsim_msgs::AgentStates_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "agent_states[]" << std::endl;
    for (size_t i = 0; i < v.agent_states.size(); ++i)
    {
      s << indent << "  agent_states[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pedsim_msgs::AgentState_<ContainerAllocator> >::stream(s, indent + "    ", v.agent_states[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEDSIM_MSGS_MESSAGE_AGENTSTATES_H
