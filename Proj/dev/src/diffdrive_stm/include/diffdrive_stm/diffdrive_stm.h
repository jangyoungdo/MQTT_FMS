#ifndef DIFFDRIVE_STM_REAL_ROBOT_H
#define DIFFDRIVE_STM_REAL_ROBOT_H

#include <cstring>
#include "rclcpp/rclcpp.hpp"

#include "hardware_interface/base_interface.hpp"
#include "hardware_interface/system_interface.hpp"
#include "hardware_interface/handle.hpp"
#include "hardware_interface/hardware_info.hpp"
#include "hardware_interface/types/hardware_interface_return_values.hpp"
#include "hardware_interface/types/hardware_interface_status_values.hpp"

#include "config.h"
#include "wheel.h"
#include "my_node.h"


using hardware_interface::return_type;

class DiffDriveStm : public hardware_interface::BaseInterface<hardware_interface::SystemInterface>
{


public:
  DiffDriveStm();

  return_type configure(const hardware_interface::HardwareInfo & info) override;

  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;

  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

  return_type start() override;

  return_type stop() override;

  return_type read() override;

  return_type write() override;



private:

  Config cfg_;

  Publisher pub_cmd_;
  Subscriber sub_enc_;

  Wheel l_wheel_;
  Wheel r_wheel_;

  rclcpp::Logger logger_;

  std::chrono::time_point<std::chrono::system_clock> time_;
  
};


#endif // DIFFDRIVE_STM_REAL_ROBOT_H