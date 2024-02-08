// Generated by gencpp from file spencer_tracking_msgs/TrackingTimingMetrics.msg
// DO NOT EDIT!


#ifndef SPENCER_TRACKING_MSGS_MESSAGE_TRACKINGTIMINGMETRICS_H
#define SPENCER_TRACKING_MSGS_MESSAGE_TRACKINGTIMINGMETRICS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace spencer_tracking_msgs
{
template <class ContainerAllocator>
struct TrackingTimingMetrics_
{
  typedef TrackingTimingMetrics_<ContainerAllocator> Type;

  TrackingTimingMetrics_()
    : header()
    , track_count(0)
    , cycle_no(0)
    , average_cycle_time(0.0)
    , cycle_time(0.0)
    , average_processing_rate(0.0)
    , cpu_load(0.0)
    , average_cpu_load(0.0)
    , elapsed_time(0.0)
    , elapsed_cpu_time(0.0)  {
    }
  TrackingTimingMetrics_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , track_count(0)
    , cycle_no(0)
    , average_cycle_time(0.0)
    , cycle_time(0.0)
    , average_processing_rate(0.0)
    , cpu_load(0.0)
    , average_cpu_load(0.0)
    , elapsed_time(0.0)
    , elapsed_cpu_time(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint64_t _track_count_type;
  _track_count_type track_count;

   typedef uint64_t _cycle_no_type;
  _cycle_no_type cycle_no;

   typedef float _average_cycle_time_type;
  _average_cycle_time_type average_cycle_time;

   typedef float _cycle_time_type;
  _cycle_time_type cycle_time;

   typedef float _average_processing_rate_type;
  _average_processing_rate_type average_processing_rate;

   typedef float _cpu_load_type;
  _cpu_load_type cpu_load;

   typedef float _average_cpu_load_type;
  _average_cpu_load_type average_cpu_load;

   typedef float _elapsed_time_type;
  _elapsed_time_type elapsed_time;

   typedef float _elapsed_cpu_time_type;
  _elapsed_cpu_time_type elapsed_cpu_time;





  typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> const> ConstPtr;

}; // struct TrackingTimingMetrics_

typedef ::spencer_tracking_msgs::TrackingTimingMetrics_<std::allocator<void> > TrackingTimingMetrics;

typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackingTimingMetrics > TrackingTimingMetricsPtr;
typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackingTimingMetrics const> TrackingTimingMetricsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator1> & lhs, const ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.track_count == rhs.track_count &&
    lhs.cycle_no == rhs.cycle_no &&
    lhs.average_cycle_time == rhs.average_cycle_time &&
    lhs.cycle_time == rhs.cycle_time &&
    lhs.average_processing_rate == rhs.average_processing_rate &&
    lhs.cpu_load == rhs.cpu_load &&
    lhs.average_cpu_load == rhs.average_cpu_load &&
    lhs.elapsed_time == rhs.elapsed_time &&
    lhs.elapsed_cpu_time == rhs.elapsed_cpu_time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator1> & lhs, const ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spencer_tracking_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e5e4499959c0302da5d8864744a1d65a";
  }

  static const char* value(const ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe5e4499959c0302dULL;
  static const uint64_t static_value2 = 0xa5d8864744a1d65aULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_tracking_msgs/TrackingTimingMetrics";
  }

  static const char* value(const ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message with timing values for analyzing the efficency \n"
"#\n"
"\n"
"Header              header                  # Header containing timestamp etc. of this message\n"
"uint64              track_count             # number of person currentl tracked\n"
"uint64              cycle_no                # incremented number of cycles        \n"
"float32             average_cycle_time      # average time for one cycle of tracker\n"
"float32             cycle_time              # cycle time of current cycle\n"
"float32             average_processing_rate # average frequency of processing data\n"
"float32             cpu_load                # current cpu load\n"
"float32             average_cpu_load        # average cpu load\n"
"float32             elapsed_time            # elapsed seconds since start\n"
"float32             elapsed_cpu_time        # elapsed cpu time since start\n"
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

  static const char* value(const ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.track_count);
      stream.next(m.cycle_no);
      stream.next(m.average_cycle_time);
      stream.next(m.cycle_time);
      stream.next(m.average_processing_rate);
      stream.next(m.cpu_load);
      stream.next(m.average_cpu_load);
      stream.next(m.elapsed_time);
      stream.next(m.elapsed_cpu_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackingTimingMetrics_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_tracking_msgs::TrackingTimingMetrics_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "track_count: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.track_count);
    s << indent << "cycle_no: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.cycle_no);
    s << indent << "average_cycle_time: ";
    Printer<float>::stream(s, indent + "  ", v.average_cycle_time);
    s << indent << "cycle_time: ";
    Printer<float>::stream(s, indent + "  ", v.cycle_time);
    s << indent << "average_processing_rate: ";
    Printer<float>::stream(s, indent + "  ", v.average_processing_rate);
    s << indent << "cpu_load: ";
    Printer<float>::stream(s, indent + "  ", v.cpu_load);
    s << indent << "average_cpu_load: ";
    Printer<float>::stream(s, indent + "  ", v.average_cpu_load);
    s << indent << "elapsed_time: ";
    Printer<float>::stream(s, indent + "  ", v.elapsed_time);
    s << indent << "elapsed_cpu_time: ";
    Printer<float>::stream(s, indent + "  ", v.elapsed_cpu_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_TRACKING_MSGS_MESSAGE_TRACKINGTIMINGMETRICS_H
