/* Auto-generated by genmsg_cpp for file /home/jchen/workspace/src/multi_map_server/msg/MultiOccupancyGrid.msg */
#ifndef MULTI_MAP_SERVER_MESSAGE_MULTIOCCUPANCYGRID_H
#define MULTI_MAP_SERVER_MESSAGE_MULTIOCCUPANCYGRID_H
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

#include "geometry_msgs/Pose.h"
#include "nav_msgs/OccupancyGrid.h"

namespace multi_map_server
{
template <class ContainerAllocator> struct MultiOccupancyGrid_
{
    typedef MultiOccupancyGrid_<ContainerAllocator> Type;

    MultiOccupancyGrid_() : maps(), origins() {}

    MultiOccupancyGrid_(const ContainerAllocator& _alloc) : maps(_alloc), origins(_alloc) {}

    typedef std::vector<::nav_msgs::OccupancyGrid_<ContainerAllocator>,
                        typename ContainerAllocator::template rebind<::nav_msgs::OccupancyGrid_<ContainerAllocator>>::other>
        _maps_type;
    std::vector<::nav_msgs::OccupancyGrid_<ContainerAllocator>,
                typename ContainerAllocator::template rebind<::nav_msgs::OccupancyGrid_<ContainerAllocator>>::other>
        maps;

    typedef std::vector<::geometry_msgs::Pose_<ContainerAllocator>,
                        typename ContainerAllocator::template rebind<::geometry_msgs::Pose_<ContainerAllocator>>::other>
        _origins_type;
    std::vector<::geometry_msgs::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<::geometry_msgs::Pose_<ContainerAllocator>>::other>
        origins;

    typedef boost::shared_ptr<::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>>       Ptr;
    typedef boost::shared_ptr<::multi_map_server::MultiOccupancyGrid_<ContainerAllocator> const> ConstPtr;
};  // struct MultiOccupancyGrid
typedef ::multi_map_server::MultiOccupancyGrid_<std::allocator<void>> MultiOccupancyGrid;

typedef boost::shared_ptr<::multi_map_server::MultiOccupancyGrid>       MultiOccupancyGridPtr;
typedef boost::shared_ptr<::multi_map_server::MultiOccupancyGrid const> MultiOccupancyGridConstPtr;

template <typename ContainerAllocator> std::ostream& operator<<(std::ostream& s, const ::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>& v)
{
    ros::message_operations::Printer<::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>>::stream(s, "", v);
    return s;
}

}  // namespace multi_map_server

namespace ros
{
namespace message_traits
{
    template <class ContainerAllocator> struct IsMessage<::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>> : public TrueType
    {
    };
    template <class ContainerAllocator> struct IsMessage<::multi_map_server::MultiOccupancyGrid_<ContainerAllocator> const> : public TrueType
    {
    };
    template <class ContainerAllocator> struct MD5Sum<::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>>
    {
        static const char* value()
        {
            return "61e63a291f11a6b1796a1edf79f34f72";
        }

        static const char* value(const ::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>&)
        {
            return value();
        }
        static const uint64_t static_value1 = 0x61e63a291f11a6b1ULL;
        static const uint64_t static_value2 = 0x796a1edf79f34f72ULL;
    };

    template <class ContainerAllocator> struct DataType<::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>>
    {
        static const char* value()
        {
            return "multi_map_server/MultiOccupancyGrid";
        }

        static const char* value(const ::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>&)
        {
            return value();
        }
    };

    template <class ContainerAllocator> struct Definition<::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>>
    {
        static const char* value()
        {
            return "nav_msgs/OccupancyGrid[] maps\n\
geometry_msgs/Pose[] origins\n\
\n\
================================================================================\n\
MSG: nav_msgs/OccupancyGrid\n\
# This represents a 2-D grid map, in which each cell represents the probability of\n\
# occupancy.\n\
\n\
Header header \n\
\n\
#MetaData for the map\n\
MapMetaData info\n\
\n\
# The map data, in row-major order, starting with (0,0).  Occupancy\n\
# probabilities are in the range [0,100].  Unknown is -1.\n\
int8[] data\n\
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
MSG: nav_msgs/MapMetaData\n\
# This hold basic information about the characterists of the OccupancyGrid\n\
\n\
# The time at which the map was loaded\n\
time map_load_time\n\
# The map resolution [m/cell]\n\
float32 resolution\n\
# Map width [cells]\n\
uint32 width\n\
# Map height [cells]\n\
uint32 height\n\
# The origin of the map [m, m, rad].  This is the real-world pose of the\n\
# cell (0,0) in the map.\n\
geometry_msgs/Pose origin\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
        }

        static const char* value(const ::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>&)
        {
            return value();
        }
    };

}  // namespace message_traits
}  // namespace ros

namespace ros
{
namespace serialization
{

    template <class ContainerAllocator> struct Serializer<::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>>
    {
        template <typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
        {
            stream.next(m.maps);
            stream.next(m.origins);
        }

        ROS_DECLARE_ALLINONE_SERIALIZER;
    };  // struct MultiOccupancyGrid_
}  // namespace serialization
}  // namespace ros

namespace ros
{
namespace message_operations
{

    template <class ContainerAllocator> struct Printer<::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>>
    {
        template <typename Stream>
        static void stream(Stream& s, const std::string& indent, const ::multi_map_server::MultiOccupancyGrid_<ContainerAllocator>& v)
        {
            s << indent << "maps[]" << std::endl;
            for (size_t i = 0; i < v.maps.size(); ++i)
            {
                s << indent << "  maps[" << i << "]: ";
                s << std::endl;
                s << indent;
                Printer<::nav_msgs::OccupancyGrid_<ContainerAllocator>>::stream(s, indent + "    ", v.maps[i]);
            }
            s << indent << "origins[]" << std::endl;
            for (size_t i = 0; i < v.origins.size(); ++i)
            {
                s << indent << "  origins[" << i << "]: ";
                s << std::endl;
                s << indent;
                Printer<::geometry_msgs::Pose_<ContainerAllocator>>::stream(s, indent + "    ", v.origins[i]);
            }
        }
    };

}  // namespace message_operations
}  // namespace ros

#endif  // MULTI_MAP_SERVER_MESSAGE_MULTIOCCUPANCYGRID_H
