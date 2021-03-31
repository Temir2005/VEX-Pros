#include "main.h"
#include "okapi/api.hpp"
using namespace okapi;
pros::Motor krutilkaHigh(7, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor krutilkaLow(18, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor intakeLeft(21, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor intakeRight(6, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor frontRight(5, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor frontLeft(3, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor backLeft(16, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor backRight(15, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_COUNTS);
/*std::shared_ptr<ChassisController> chassis =
  ChassisControllerBuilder()
    .withMotors({-3, -16},   {5, 15})
    // Green gearset, 4 in wheel diam, 11.5 in wheel track
    .withDimensions(AbstractMotor::gearset::green, {{7.5_in, 12_in}, imev5GreenTPR})
    .withOdometry() // Use the same scales as the chassis (above)
    .buildOdometry()
    .withGains(
      {0.001, 0, 0.0001}, // Distance controller gains
      {0.001, 0, 0.0001}, // Turn controller gains
      {0.001, 0, 0.0001}  // Angle controller gains (helps drive straight)
    )
    .withDerivativeFilters(
    std::make_unique<AverageFilter<3>>(), // Distance controller filter
    std::make_unique<AverageFilter<3>>(), // Turn controller filter
    std::make_unique<AverageFilter<3>>()  // Angle controller filter
    )
    .withMaxVoltage(10000)
    .build();*/

pros::Controller controller(pros::E_CONTROLLER_MASTER);
