#include "main.h"


/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void redLeftCorner(){
  std::shared_ptr<ChassisController> chassis =
    ChassisControllerBuilder()
      .withMotors({-3, -16},   {5, 15})
      // Green gearset, 4 in wheel diam, 11.5 in wheel track
      .withDimensions(AbstractMotor::gearset::green, {{7.5_in, 12_in}, imev5GreenTPR})
      .build();
  //FIRST PART
  //first tower + first ball
 /*allkrutilkas(200, 127);
  intakes(300, -100);
  translate(1900, 70);
  setLow(127);
  setIntakes(100);
  translate(600, 60);
  pros::delay(800);
  setLow(0);
  setIntakes(0);
  //going for the second tower
  rotate(35, 85);
  pros::delay(500);
  translate(7400, 80);
  rotate(44, 80);
  intakes(240, -80);
  translate(1400, 70);
  allkrutilkas(200, -100);
  setAll(127);
  pros::delay(2100);
  setAll(0);
  //going for the second ball
  translate(1700, -90);
  intakes(250, 80);
  rotate(53, -80);
  intakes(300, -100);
  translate(8500, 80);
  setLow(127);
  setIntakes(127);
  //going for the third tower
  translate(4600, 80);
  setLow(0);
  rotate(41, 80);
  intakes(240, -80);
  translate(3200, 90);
  setAll(127);
  pros::delay(1100);
  setAll(0);
  setIntakes(0);
  //calinrating with wall
  translate(2400, -60);
  rotate(131, -80);
  translate(5060, -70);
  //going for the third ball
  setDrive(30, 30);
  pros::delay(500);
  translate(11500, 100);
  setIntakes(127);
  setLow(127);
  //throwing into fourth tower
  translate(400, 90);
  rotate(90, 80);
  setIntakes(0);
  intakes(250, -80);
  translate(2000, 90);
  setLow(0);
  setAll(127);
  pros::delay(1500);
  setAll(0);

  //SECOND PART
  //going backwards and turnig to a ball
  translate(4000, -90);
  intakes(250, 120);
  rotate(75, -80);
  //taking a ball
  intakes(150, -100);
  setLow(127);
  translate(11500, 80);
  setIntakes(127);
  //throwing it into a tower
  rotate(55, 80);
  intakes(250, -100);
  translate(5200, 100);
  setIntakes(0);
  setAll(127);
  pros::delay(500);
  setAll(0);
  //going for the second ball
  translate(6000, -90);
  rotate(45, 80);
  translate(6000, 90);
  translate(800, -70);
  setIntakes(127);
  setLow(127);
  pros::delay(1000);
  setIntakes(0);
  setLow(0);
  //going for the second tower
  rotate(146, 80);
  translate(11000, 90);
  translate(2000, 120);
  translate(1400, -90);
  intakes(250, -100);
  translate(1600, 80);
  setIntakes(127);
  setAll(127);
  pros::delay(1000);
  setIntakes(0);
  setAll(0);
  //going for the third ball
  translate(1300, -80);
  rotate(70, 80);
  intakes(250, -80);
  translate(5000, 100);
  setLow(127);
  setIntakes(127);
  pros::delay(700);
  setLow(0);
  setIntakes(0);
  rotate(60, 80);
  translate(6000, 120);
  setAll(127);
  ///////////pros::delay(800);*/
  /*translate(4000, -80);
  rotate(74, 80);
  //taking a ball
  intakes(250, -100);
  setLow(127);
  translate(10000, 80);
  translate(2000, 50);
  setIntakes(127);
  //throwing it into a tower
  rotate(55, -80);
  translate(4700, 100);
  setAll(127);
  pros::delay(1000);
  setAll(0);
  setIntakes(0);
  //going for the second ball
  translate(6000, -80);
  rotate(45, -80);
  intakes(250, -100);
  translate(7000, 80);
  translate(800, -60);
  setIntakes(127);
  setLow(127);
  pros::delay(1000);
  setIntakes(0);
  setLow(0);
  //going for the second tower
  rotate(170, -80);
  intakes(250, -100);
  translate(12400, 80);
  setIntakes(127);
  setLow(127);
  pros::delay(800);
  rotate(108, -80);
  translate(7400, 80);
  setAll(127);*/
  chassis->moveDistance(1_m);
}

void redRightCorner(){

}

void blueLeftCorner(){

}

void blueRightCorner(){

}
void autonomous() {
  redLeftCorner();
  //redRightCorner();
  //blueRightCorner();
  //blueLeftCorner();
}
