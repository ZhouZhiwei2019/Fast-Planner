/* Auto-generated by genmsg_cpp for file /home/jchen/workspace/src/quadrotor_msgs/msg/TRPYCommand.msg */
#ifndef QUADROTOR_MSGS_MESSAGE_TRPYCOMMAND_H
#define QUADROTOR_MSGS_MESSAGE_TRPYCOMMAND_H
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/serialization.h"
#include "ros/time.h"
#include <map>
#include <ostream>
#include <string>
#include <vector>

#include "ros/macros.h"

#include "ros/assert.h"

#include "quadrotor_msgs/AuxCommand.h"
#include "std_msgs/Header.h"

namespace quadrotor_msgs
{
template <class ContainerAllocator> struct TRPYCommand_
{
    typedef TRPYCommand_<ContainerAllocator> Type;

    TRPYCommand_() : header(), thrust(0.0), roll(0.0), pitch(0.0), yaw(0.0), aux() {}

    TRPYCommand_(const ContainerAllocator& _alloc) : header(_alloc), thrust(0.0), roll(0.0), pitch(0.0), yaw(0.0), aux(_alloc) {}

    typedef ::std_msgs::Header_<ContainerAllocator> _header_type;
    ::std_msgs::Header_<ContainerAllocator>         header;

    typedef float _thrust_type;
    float         thrust;

    typedef float _roll_type;
    float         roll;

    typedef float _pitch_type;
    float         pitch;

    typedef float _yaw_type;
    float         yaw;

    typedef ::quadrotor_msgs::AuxCommand_<ContainerAllocator> _aux_type;
    ::quadrotor_msgs::AuxCommand_<ContainerAllocator>         aux;

    typedef boost::shared_ptr<::quadrotor_msgs::TRPYCommand_<ContainerAllocator>>       Ptr;
    typedef boost::shared_ptr<::quadrotor_msgs::TRPYCommand_<ContainerAllocator> const> ConstPtr;
};  // struct TRPYCommand
typedef ::quadrotor_msgs::TRPYCommand_<std::allocator<void>> TRPYCommand;

typedef boost::shared_ptr<::quadrotor_msgs::TRPYCommand>       TRPYCommandPtr;
typedef boost::shared_ptr<::quadrotor_msgs::TRPYCommand const> TRPYCommandConstPtr;

template <typename ContainerAllocator> std::ostream& operator<<(std::ostream& s, const ::quadrotor_msgs::TRPYCommand_<ContainerAllocator>& v)
{
    ros::message_operations::Printer<::quadrotor_msgs::TRPYCommand_<ContainerAllocator>>::stream(s, "", v);
    return s;
}

}  // namespace quadrotor_msgs

namespace ros
{
namespace message_traits
{
    template <class ContainerAllocator> struct IsMessage<::quadrotor_msgs::TRPYCommand_<ContainerAllocator>> : public TrueType
    {
    };
    template <class ContainerAllocator> struct IsMessage<::quadrotor_msgs::TRPYCommand_<ContainerAllocator> const> : public TrueType
    {
    };
    template <class ContainerAllocator> struct MD5Sum<::quadrotor_msgs::TRPYCommand_<ContainerAllocator>>
    {
        static const char* value()
        {
            return "6779ee8a86cc757aeea21725df32d00c";
        }

        static const char* value(const ::quadrotor_msgs::TRPYCommand_<ContainerAllocator>&)
        {
            return value();
        }
        static const uint64_t static_value1 = 0x6779ee8a86cc757aULL;
        static const uint64_t static_value2 = 0xeea21725df32d00cULL;
    };

    template <class ContainerAllocator> struct DataType<::quadrotor_msgs::TRPYCommand_<ContainerAllocator>>
    {
        static const char* value()
        {
            return "quadrotor_msgs/TRPYCommand";
        }

        static const char* value(const ::quadrotor_msgs::TRPYCommand_<ContainerAllocator>&)
        {
            return value();
        }
    };

    template <class ContainerAllocator> struct Definition<::quadrotor_msgs::TRPYCommand_<ContainerAllocator>>
    {
        static const char* value()
        {
            return "Header header\n\
float32 thrust\n\
float32 roll\n\
float32 pitch\n\
float32 yaw\n\
quadrotor_msgs/AuxCommand aux\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: quadrotor_msgs/AuxCommand\n\
float64 current_yaw\n\
float64 kf_correction\n\
float64[2] angle_corrections# Trims for roll, pitch\n\
bool enable_motors\n\
bool use_external_yaw\n\
\n\
";
        }

        static const char* value(const ::quadrotor_msgs::TRPYCommand_<ContainerAllocator>&)
        {
            return value();
        }
    };

    template <class ContainerAllocator> struct HasHeader<::quadrotor_msgs::TRPYCommand_<ContainerAllocator>> : public TrueType
    {
    };
    template <class ContainerAllocator> struct HasHeader<const ::quadrotor_msgs::TRPYCommand_<ContainerAllocator>> : public TrueType
    {
    };
}  // namespace message_traits
}  // namespace ros

namespace ros
{
namespace serialization
{

    template <class ContainerAllocator> struct Serializer<::quadrotor_msgs::TRPYCommand_<ContainerAllocator>>
    {
        template <typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
        {
            stream.next(m.header);
            stream.next(m.thrust);
            stream.next(m.roll);
            stream.next(m.pitch);
            stream.next(m.yaw);
            stream.next(m.aux);
        }

        ROS_DECLARE_ALLINONE_SERIALIZER;
    };  // struct TRPYCommand_
}  // namespace serialization
}  // namespace ros

namespace ros
{
namespace message_operations
{

    template <class ContainerAllocator> struct Printer<::quadrotor_msgs::TRPYCommand_<ContainerAllocator>>
    {
        template <typename Stream> static void stream(Stream& s, const std::string& indent, const ::quadrotor_msgs::TRPYCommand_<ContainerAllocator>& v)
        {
            s << indent << "header: ";
            s << std::endl;
            Printer<::std_msgs::Header_<ContainerAllocator>>::stream(s, indent + "  ", v.header);
            s << indent << "thrust: ";
            Printer<float>::stream(s, indent + "  ", v.thrust);
            s << indent << "roll: ";
            Printer<float>::stream(s, indent + "  ", v.roll);
            s << indent << "pitch: ";
            Printer<float>::stream(s, indent + "  ", v.pitch);
            s << indent << "yaw: ";
            Printer<float>::stream(s, indent + "  ", v.yaw);
            s << indent << "aux: ";
            s << std::endl;
            Printer<::quadrotor_msgs::AuxCommand_<ContainerAllocator>>::stream(s, indent + "  ", v.aux);
        }
    };

}  // namespace message_operations
}  // namespace ros

#endif  // QUADROTOR_MSGS_MESSAGE_TRPYCOMMAND_H
